#include <stdio.h>

// �Ʒ� x�� ���� �迭 �ƴմϴ�.
// "int* x" �Դϴ�.
// �迭�� �Լ� ���ڷ� �޴� ���� ������ �ۿ� �ȵ˴ϴ�.
void foo(int x[7] )
{
	int sz = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", x[i]);
	}
}


int main()
{
	int x[7] = { 1,2,3,4,5 };

	foo(x);

	/*
	// �迭�� ũ�⸦ ���ϴ� ��ũ��
	// => "�迭 �޸� ũ�� / �迭 ����� ũ��" => �迭�� ��Ұ���
	int sz = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", x[i]);
	}
	*/
}