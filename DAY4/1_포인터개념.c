// 1_�����Ͱ���.c
#include <stdio.h>

void add_sub(int a, int b,     // in parameter(����)
			 int* p1, int* p2) // out parameter
{
	*p1 = a + b;
	*p2 = a - b;
}




int main()
{
	// 1. ������ ������ ?
	// => �ٸ� ������ �ּҸ� ��� ����
	int n = 10;
	int* p = &n;

	// 2. ������ ������ ����Ű�� �޸� ���󰡱�(* ������)
	// => "������(dereferencing)" �̶�� �մϴ�.
	*p = 20; // �ᱹ n = 20

	// 3. �� �����͸� ����ϳ��� ?
	// => �������� ������ ������..
	// => 1. �Լ����� ������ ���� ���� ���� ������
	int s1 = 0;
	int s2 = 0;

	add_sub(10, 20, &s1, &s2);
				// call by reference(pointer, address)

}