#include <stdio.h>

// 아래 x는 절대 배열 아닙니다.
// "int* x" 입니다.
// 배열을 함수 인자로 받는 것은 포인터 밖에 안됩니다.
void foo(int x[7] )
{
	int sz = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", x[i]);
	}
}


int main()
{
	int x[7] = { 1,2,3,4,5 };

	foo(x);

	/*
	// 배열의 크기를 구하는 테크닉
	// => "배열 메모리 크기 / 배열 요소의 크기" => 배열의 요소갯수
	int sz = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", x[i]);
	}
	*/
}