// 4_포인터4.c - 100 page 참고
#include <stdio.h>

// 함수 인자를 받는 것은 변수의 선언 입니다.
// int x = a(main에서 보낸)

// 아래 코드가 call by value (값에 의한 함수 호출 입니다.)
// => inc 안에서는 절대 main 함수의 a 메모리에 접근 안됩니다.
void inc(int x)  // int x = a
{
	++x;
}

int main()
{
	int a = 1;
	int x = a;

	inc(a);

	printf("%d\n", a);
}