// main.c
#include <stdio.h>

//int add(int, int);

// add ����ڴ� add.c�� ���� �������
// add.h �� �޾Ƽ� �Ʒ� ó�� �մϴ�.
#include "add.h" // �� ������ ������ �о �� ��ġ�� 
				 // ���� �޶�.

int main()
{
	int ret = add(1, 2);

	printf("result : %d\n", ret);
}

