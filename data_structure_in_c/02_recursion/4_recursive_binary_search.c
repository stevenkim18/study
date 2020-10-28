#include <stdio.h>

int BsearchRecur(int ar[], int first, int last, int target)
{
	int mid;
	if (first > last)
	 	return -1;
	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;
	else if (target < ar[mid])
		return BsearchRecur(ar, first, mid - 1, target);
	else
		return BsearchRecur(ar, mid + 1, last, target);


}

int main(void)
{
	int arr[] = {1, 2, 3, 7, 9, 12, 21, 23, 27};
	int idx;

	idx = BsearchRecur(arr, 0, 8, 7);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);

	idx = BsearchRecur(arr, 0, 8, 10);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);
}
