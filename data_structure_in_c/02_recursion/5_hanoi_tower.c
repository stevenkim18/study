#include <stdio.h>
#include <stdlib.h>

int count = 0;
//						5		   A		 B		  C
void HanoiTowerMove(int num, char from, char by, char to)
{
	count++;
	if (num == 1)
		printf("circle1 move %c to %c\n", from, to);
	else
	{
		HanoiTowerMove(num - 1, from, to, by);								// 1단계 4개를 A에서 B로 이동 C를 거쳐서
		printf("circle\033[1;31m%d\033[0m move %c to %c\n", num, from, to);	// 2단계 원5가 A에서 C로 이동
		HanoiTowerMove(num - 1, by, from, to);								// 3단계 4개를 B에서 C로 이동 A를 거쳐서
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	HanoiTowerMove(atoi(argv[1]), 'A', 'B', 'C');
	printf("count = %d\n", count);
}
