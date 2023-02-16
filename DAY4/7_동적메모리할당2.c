// 7_동적메모리할당2.c - 112
#include <stdio.h>

int g = 0;

int main()
{
	int n = 0;

	int* p = 0;
	
	p = malloc(40);

	// 사용후..
	p[0] = 10;

	// 제거
	// => 아래 코드는 p를 제거 하는게 아닙니다.
	// => p가 담고 있는 주소의 메모리(malloc으로 할당한)를 제거
	free(p);

	p = malloc(20);
	free(p);
}