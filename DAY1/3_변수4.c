#include <stdio.h>

int main()
{
	int n1 = 10;
	
	// �پ��� ���·� ��� �����մϴ�.
	// ���� :���ۿ��� "C format string" �˻��ϸ� ���� �����ϴ�.
	printf("%d\n", n1);		// 10����
	printf("%x\n", n1);		// 16����
	printf("%X\n", n1);
	printf("%4d\n", n1);	// "4�ڸ����缭 10����"
	printf("%04d\n", n1);	// "4�ڸ����缭 10����"
}