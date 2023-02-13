// 7_반복문1.c
#include <stdio.h>

// while - 45page
// 조건문 : if, switch   조건을 만족하면 한번 실행
// 반복문 : while, do while, for   조건을 만족하면 계속 반복 실행
int main()
{
	int i = 0;

	if (i < 10)
	{
		printf("if 문은 조건을 만족하면 한번 실행됨\n");
	}

	while (i < 10)
	{
		printf("while 문은 조건을 만족하면 계속 반복 실행됨\n");
	}

	printf("coninue main\n");
}