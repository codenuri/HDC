#include <stdio.h>

// ������ �پ��� �Ӽ� ��� ��� - �߿�! 23 page
int main()
{
	int n = 10;

	printf("%d\n", n);
	
	// �ٽ� : �ּҴ� &n ���ϰ�, ��½� %p ���
	printf("%d\n", &n); // �ּҸ� 10������
	printf("%x\n", &n); // �ּҸ� 16������
	printf("%p\n", &n); // �ּҸ� 16������

	// sizeof �ش� ������ �޸� ũ�� ���ϱ�.
	// ��½�, ��ȣ ���ο� ����...
	printf("%d\n", sizeof n );	// ������ ũ��
	printf("%d\n", sizeof(n));	// () �� �־ �˴ϴ�.

	printf("%d\n", sizeof(double)); // Ÿ���� �������� �ֽ��ϴ�.
								// �� ���� �ݵ�� () ���
}