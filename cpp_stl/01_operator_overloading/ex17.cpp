#include <iostream>

class Array
{
	private:
		int *arr;
		int size;
		int	capacity;

	public:
		Array(int cap = 100) : arr(nullptr), size(0), capacity(cap)
		{
			arr = new int[capacity];
		}

		~Array() {delete [] arr;}

		void add(int data)
		{
			if (size < capacity)
				arr[size++] = data;
		}

		int getSize() const { return this->size;}

		int operator[] (int idx) const { return arr[idx];}
};

int main(void)
{
	Array ar(10);

	ar.add(1);
	ar.add(2);
	ar.add(3);

	for (int i = 0; i < ar.getSize(); i++)
		std::cout << ar[i] << std::endl;

}
