// 5_�Ķ����.c
#include <stdio.h>

// ���ڷ� ���� 2���� ������ ������ ���� ����� ��ȯ�ϰ� �ʹ�.
// => �Լ��� ��ȯ���� �Ѱ��� ����� �ִ�.

// �Լ� "����"�� "�Ķ����(parameter)" ��� �մϴ�.

// in parameter  : �Լ��� ���� �����ϴ� �Ķ����
// out parameter : �Լ����� ���� �������� ���� �Ķ����
//					(�޸� �ּҸ� ����)

int add_sub(int a, int b, int *out)
{
	*out = a - b;

	return a + b;
}

int main()
{
	int r2 = 0;
	int r1 = add_sub(10, 3, &r2);

	printf("%d, %d\n", r1, r2);


	int n = 0;

	// ����� �Է��� n�� ��� ���� �ʹ�
	scanf_s("%d", &n );
}