#include <stdio.h>

// ��?? �����Ͱ� �ʿ��Ѱ��� ?

// 1. �ٸ� �Լ����� ���� ����(�޸�)�� �����ؼ� ���� �����ϰ� ������
// => �Լ� ���ڷ� ������ �ּҸ� ����.

// => call by address, call by pointer, call by reference
//   ��� ������ ����մϴ�.

// inc �ȿ��� main ���� ���� a ������ ���� �����ϰ� �ʹٸ�
void inc( int *p )  
{
	++(*p);
}

int main()
{
	int a = 1;

	inc(&a);

	printf("%d\n", a);
}