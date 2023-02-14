#include <stdio.h>

// step 6. 1�� 1���� �ƴ� �ٸ� ��(month)�� 1���� ���� ���ϱ�





int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int year = 2023;
	int month = 5;

	int last_year = year - 1;
	int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

	// �Ʒ� �ڵ�� 1�� 1���� ����
	int week_of_day = (year + leap_count) % 7;

	// 5�� 1���� ������ 1�� ~ 4�� ������ �ϼ��� ������ 7�� ������ �ȴ�.
	// month �� 5�̸�, 4�������� ��. ��, 0 ~ 3
	for (int i = 0; i < month-1  ; i++)
	{
		week_of_day += days[i];
	}

	week_of_day = week_of_day % 7;





	printf(" SUN MON TUE WED THU FRI SAT\n");


	for (int i = 0; i < week_of_day; i++)
	{
		printf("    ");
	}


	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ((i + week_of_day) % 7 == 0)
			printf("\n");
	}
}