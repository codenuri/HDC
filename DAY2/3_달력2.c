#include <stdio.h>

// step 2. �� ���� ��¥ ��� ���
// �ٽ� : �� ���� ��¥�� "�迭"�� �����ϴ� ���

int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int month = 0;

	printf("���ϴ� ���� �Է��ϼ��� >> ");

	scanf_s("%d", &month);



	printf(" SUN MON TUE WED THU FRI SAT\n");


	for (int i = 1; i <= days[month-1] ; i++)
	{
		printf("%4d", i);

		if (i % 7 == 0)
			printf("\n");
	}
}