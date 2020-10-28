#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
	int first = 0;
	int	last = len - 1;
	int mid;

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
	}
	return -1;
}

int main(void)
{
	int arr[] = {1, 2, 3, 7, 9, 12, 21, 23, 27};
	int idx;

	idx = BSearch(arr, 9, 3);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);

	idx = BSearch(arr, 9, 4);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);
}
