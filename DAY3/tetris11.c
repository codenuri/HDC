// tetris11.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int n = 0;

	// 사용자 입력 1. scanf_s => enter 키를 눌러야 입력됨.
//	scanf_s("%d", &n);

	// 사용자 입력 2.
	int n1 = _getch();  // conio.h 필요. enter 키 입력 안해도 됨

	n1 = _getch();

	printf("입력된 키보드 : %d\n", n1);
}
// 위 :	72
// 아래 : 80
// 왼쪽 : 75
// 오른쪽 : 77