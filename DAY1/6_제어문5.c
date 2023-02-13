// 6_제어문5.c
#include <stdio.h>

// if : 조건을 만족할때(만족하지 않을때)만 실행
// switch : 값에 따른 분기 - 42 page

int main()
{
	int n = 3;

	switch (n)
	{
	case 1: 
		printf("1\n");
		printf("one\n");
		break;

	case 3:
		printf("3\n");
		break;
	}
}