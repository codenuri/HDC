// tetris11.c
#include <stdio.h>
#include <conio.h>

int main()
{
	int n = 0;

	// ����� �Է� 1. scanf_s => enter Ű�� ������ �Էµ�.
//	scanf_s("%d", &n);

	// ����� �Է� 2.
	int n1 = _getch();  // conio.h �ʿ�. enter Ű �Է� ���ص� ��

	n1 = _getch();

	printf("�Էµ� Ű���� : %d\n", n1);
}
// �� :	72
// �Ʒ� : 80
// ���� : 75
// ������ : 77