// 3_���ȣ��1.c - 88 page
#include <stdio.h>

// print(3) ==> print
//				"hello" ���
//				print(2)	==> print
//				return			"hello" ���
//								print(1)	==> print 
//								return			"hello" ���
//												print(0)	==> print
//												return			return;

void print_hello(int n)
{
	if (n == 0) return;

	print_hello(n - 1);	// ���� ȣ���ϰ� ���ƿö� �Ʒ� printf ����
						// 1, 2, 3

	printf("hello : %d\n", n);

//	print_hello(n - 1); // �̷��� �ϸ� 3, 2, 1
						// ���� ����ϰ� ��� ȣ��.

	return;
}

int main()
{
	print_hello(3);
}