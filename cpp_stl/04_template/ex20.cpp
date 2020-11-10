#include <iostream>

template<typename iterT, typename Func>
void For_each(iterT begin, iterT end, Func pf)
{
	while(begin != end)
		pf(*begin++);
}

template<typename T>
struct printFunctor
{
	private:
		std::string sep;

	public:
		explicit printFunctor(const std::string& s= " "):sep(s)
		{
			std::cout << "constructor" << std::endl;
		}

		void operator() (T data) const
		{
			std::cout << data << this->sep;
		}
};

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	For_each(arr, arr+5, printFunctor<int>());
	std::cout << std::endl;

	std::string sarr[2] = {"aa", "bb"};
	For_each(sarr, sarr+2, printFunctor<std::string>("\n"));
}
