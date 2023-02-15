// 3_���ȣ��4.c
#include <stdio.h>

// �Ʒ� �Լ��� ������ ������
int factorial(int n)
{
	if (n == 1) return 1;	// ����� ����!!
							// ��� ��� ȣ���� �ݵ�� ���������ʿ�

	return n * factorial(n - 1);
		// 5 * f(4)
		//	   4 * f(3)
		//		   3 * f(2)
		//				2 * f(1)
		//					1
}
// �� ��� ȣ���� ����ϳ��� ?
// => �Ϻ� �˰���(�����ذ�)�� ��� ȣ���� ����ϸ� ���Ҷ��� �ֽ��ϴ�.
// => �׷���, ��� ȣ��� ����� �ڵ�� �����ε� ����� �ֽ��ϴ�.

int factorial_loop(int n)
{
	int ret = 1;

	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main()
{
	int ret = factorial(5);

	printf("%d\n", ret);
	printf("%d\n", factorial_loop(5));
}