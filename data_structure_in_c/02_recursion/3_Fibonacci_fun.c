#include <stdio.h>

int count = 0;

int Fibo(int n)
{
	printf("%d call %d\n", count++, n);
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) +  Fibo(n - 2);
}

int main(void)
{
	Fibo(7);
	// int i;
	// for (i = 1; i < 30; i++)
	// 	printf("%d ", Fibo(i));
}
