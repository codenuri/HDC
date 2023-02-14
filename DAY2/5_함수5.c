#include <stdio.h>

const int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

// ���α׷� �ۼ��� main �Լ��� ��� �ۼ����� ����
// �� ��ɺ��� �Լ��� �и� �ϼ���
// �ƹ��� �����ص� "����� ����(divide and conquer)" �Ҽ� �ִ�

// ���ڷ� ������ ���� �޾Ƽ� 1���� ������ ��ȯ�ϴ� �Լ�
int get_week_of_day(int year, int month)
{
	int last_year = year - 1;
	int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

	int week_of_day = (year + leap_count) % 7;

	for (int i = 0; i < month - 1; i++)
	{
		week_of_day += days[i];
	}

	week_of_day = week_of_day % 7;

	return week_of_day;
}


void print_calendar(int month, int week_of_day )
{
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

int main()
{
	int year = 2020;
	int month = 7;

	int week_of_day = get_week_of_day(year, month);

	// �Ʒ� �κ��� print_calendar()�� �и��� ������
	// 1. ���ڸ� ���� ���� ������ ������. 
	// 2. ����Ÿ���� ���� ����!

	print_calendar(month, week_of_day);
}