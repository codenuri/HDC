#include <stdio.h>
#include <stdlib.h> // rand() �Լ� 

int main()
{
	// rand() �Լ��� ����Ϸ��� ���� �ʱ�ȭ �ʿ�
	// time() : ���� �ð��� ���ؼ� ��ȯ���� 
	// srand( ���� �ð�) �� ���� ���Ҷ� �ʱⰪ���� ���
	srand( time(0) );


	for (int i = 0; i < 5; i++)
	{
		int n = rand() % 7; // ����(������ ����)�� ���ϴ� �Լ�

		printf("%d\n", n);
	}
}

// cppreference.com �� �����ؼ� rand  �˻� �ϼ���
// ��� ���� ������ �ʿ� ���� ������.