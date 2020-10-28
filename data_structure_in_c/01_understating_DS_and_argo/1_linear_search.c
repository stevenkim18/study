#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
	int i;
	for (int i = 0; i < len; i++)
	{
		// 이 알고리즘에서 주요한 연산!!
		if (ar[i] == target)
			return i;
	}
	return -1;
}

int main(void)
{
	int arr[] = {3, 5, 2, 4, 9};

	int idx;
	idx = LSearch(arr, 5, 4);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);

	idx = LSearch(arr, 5, 7);
	if (idx == -1)
		printf("fail!\n");
	else
		printf("success -> %d\n", idx);

}
