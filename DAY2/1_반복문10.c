#include <stdio.h>

// do ~ while �ݺ���
int main()
{
	int i = 100;

	while (i < 10)
	{
		printf("while ���� ������ �����̸� �ѹ��� ����ȵ�\n");
	}

	do
	{
		printf("do~while ���� ������ �����̶� �ѹ��� ����\n");
		printf("��, �ѹ� ������ ���� ����\n");

	}while (i < 10);
}
