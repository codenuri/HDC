// 3_���ȣ��1.c - 88 page
#include <stdio.h>

// ��� ȣ�� (recursive call ) : �Լ��� �ڽ��� �ٽ� ȣ���ϴ� ��
//		�ݵ�� ������ ������ �־�� �Ѵ�.
//		������ ������ ���� ��� ȣ���ϸ� �޸� �������� ������ ����!

// ����) �Լ� ȣ��� ���ƿ� �ּҸ� �˷��ֱ� ���� "�޸� ���"�Ѵ�.

void print_hello()
{
	printf("hello\n");

	print_hello();
}

int main()
{
	print_hello();
}