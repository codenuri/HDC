#include <stdio.h>
#include <stdlib.h>

void foo(int(*p4)[2]) {}

int main()
{
	int x[2] = { 1,2 };

	int(*p1)[2] = &x; // �迭�� �ּ�
	int* p2 = x;      // 1��° ����� �ּ�


	int y[3][2] = { {1,2},{3,4},{5,6} };

	int (*p3)[3][2] = &y;	// 2���迭�� �ּ�

	int(*p4)[2] = y;

	foo(y);


	// �����޸𸮸� 1�� �迭�� ����ϰڴ�
	// int[6] �迭�� ���
	int* pp1 = malloc(sizeof(int)* 6);


	// int[3][2] �迭�� ���
	int(*pp2)[2] = malloc(sizeof(int) * 6);
}