// ��ũ�� �Լ�
// ���� 1. �Ϲ��Լ� ���� ������.
//     2. ��� Ÿ�Կ� �����ϴ� �Լ� - generic �Լ�
// 
// ���� : ���������� ��ũ�δ� �ַ� �빮�ڷ� ����ϴ�.
//       �ҹ��ڷ� �ص� �˴ϴ�.
//#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

#define WIDTH     10		// ��ũ�� ���
#define ADD(a, b) a + b		// ��ũ�� �Լ�

int main()
{
	int r1 = add(1, 2);
	int r2 = ADD(1, 2); // 1 + 2

	double d1 = add(2.1, 3.4); // ��� 3
	double d2 = ADD(2.1, 3.4); // 2.1 + 3.4
}
// gcc 2_��ũ��2.c -E -P