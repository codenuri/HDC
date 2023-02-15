#include <stdio.h>

void swap(int *p1, int *p2)
{
	int temp = *p1;

	*p1 = *p2;

	*p2 = temp;
}

int main()
{
	int x = 10;
	int y = 20;

	/*
	// x, y 값을 서로 교환해 보세요
	int temp = x; // x를 임시변수에 보관후
	x = y;
	y = temp;
	*/
	swap(&x , &y ); // 만들어 보세요.. 실행후에는 x,y 값 바뀌어야 합니다.

	printf("%d\n", x); // 20
	printf("%d\n", y); // 10
}