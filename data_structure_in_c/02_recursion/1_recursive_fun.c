#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)
		return;
	printf("call %d\n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(4);
	return 0;
}
