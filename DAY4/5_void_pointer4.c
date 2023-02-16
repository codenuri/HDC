#include <stdio.h>

// ���ڷ� ���� �������� ��ȯ(swap)�ϴ� �Լ�
// �Ʒ� ó�� ���ڸ� ������ ������(call by value )
// main �Լ����� ���� ����(x, y) �� ���� �����Ҽ��� �����ϴ�.

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
	printf("%d\n", y); // 10 �� ���;� �մϴ�.
}