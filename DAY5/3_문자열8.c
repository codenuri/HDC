// ���ڿ� �迭�� ���ڿ� ������ (�ణ ����� ����) 124 page
#include <stdio.h>

void foo()
{
	char s[] = "HELLO";
	char* p = "HELLO";

	printf("foo  : %p, %p\n",p, s);
}

int main()
{
	// 124 page �׸��� �ٽ�

	char s[] = "HELLO";	// ���ڿ� �迭
	char* p = "HELLO";	// ���ڿ� ������

	printf("main : %p, %p\n", p, s);

	foo();
}