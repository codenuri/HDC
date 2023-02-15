// 3_재귀호출1.c - 88 page
#include <stdio.h>

// 재귀 호출 (recursive call ) : 함수가 자신을 다시 호출하는 것
//		반드시 끝나는 조건이 있어야 한다.
//		끝나는 조건이 없이 계속 호출하면 메모리 부족으로 비정상 종료!

// 참고) 함수 호출시 돌아올 주소를 알려주기 위해 "메모리 사용"한다.

void print_hello()
{
	printf("hello\n");

	print_hello();
}

int main()
{
	print_hello();
}