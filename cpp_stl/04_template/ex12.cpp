#include <iostream>

template<typename T>
class Array
{
	private:
		T 	*buf;
		int size;
		int capacity;

	public:
		explicit Array(int cap = 100) : buf(nullptr), size(0), capacity(cap)
		{
			buf = new T[capacity];
		}

		~Array() { delete [] buf; }

		void add(T data)
		{
			buf[size++] = data;
		}

		T operator[](int idx) const
		{
			return buf[idx];
		}

		int getSize() const
		{
			return this->size;
		}
};

int main(void)
{
	Array<int> iarr;		// 클라이언트가 타입 결정
	iarr.add(1);
	iarr.add(2);
	iarr.add(3);
	iarr.add(4);

	for (int i = 0; i < iarr.getSize(); i++)
		std::cout << iarr[i] << std::endl;
	std::cout << std::endl;

	Array<std::string> sarr;
	sarr.add("aaa");
	sarr.add("bbb");
	sarr.add("ccc");

	for (int i = 0; i < sarr.getSize(); i++)
		std::cout << sarr[i] << std::endl;
	std::cout << std::endl;
}

