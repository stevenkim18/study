#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int	last = len - 1;
	int mid;
	int count = 0;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == ar[mid])
			return mid;
		else
		{
			if (target < ar[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		count++;
	}
	printf("len = %d, count = %d\n", len, count);
	return -1;
}

int main(void)
{
	int arr1[100] = {0, };
	int arr2[1000] = {0, };
	int arr3[10000] = {0, };
	int arr4[100000] = {0, };

	BSearch(arr1, 100, 1);
	BSearch(arr2, 1000, 1);
	BSearch(arr3, 10000, 1);
	BSearch(arr4, 100000, 1);

}
