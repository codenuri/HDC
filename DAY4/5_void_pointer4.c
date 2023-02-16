#include <stdio.h>

// 인자로 받은 변수값을 교환(swap)하는 함수
// 아래 처럼 인자를 값으로 받으면(call by value )
// main 함수에서 만든 변수(x, y) 의 값을 변경할수는 없습니다.

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x = 10;
	int y = 20;

	swap(x, y);

	printf("%d\n", x); // 20
	printf("%d\n", y); // 10 이 나와야 합니다.
}