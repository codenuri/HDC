// 7_�����޸��Ҵ�2.c - 112
#include <stdio.h>

int g = 0;

int main()
{
	int n = 0;

	int* p = 0;
	
	p = malloc(40);

	// �����..
	p[0] = 10;

	// ����
	// => �Ʒ� �ڵ�� p�� ���� �ϴ°� �ƴմϴ�.
	// => p�� ��� �ִ� �ּ��� �޸�(malloc���� �Ҵ���)�� ����
	free(p);

	p = malloc(20);
	free(p);
}