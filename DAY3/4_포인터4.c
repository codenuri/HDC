// 4_������4.c - 100 page ����
#include <stdio.h>

// �Լ� ���ڸ� �޴� ���� ������ ���� �Դϴ�.
// int x = a(main���� ����)

// �Ʒ� �ڵ尡 call by value (���� ���� �Լ� ȣ�� �Դϴ�.)
// => inc �ȿ����� ���� main �Լ��� a �޸𸮿� ���� �ȵ˴ϴ�.
void inc(int x)  // int x = a
{
	++x;
}

int main()
{
	int a = 1;
	int x = a;

	inc(a);

	printf("%d\n", a);
}