// 3_�޷�8.c
#include <stdio.h>
#include <conio.h>  // _getch() �Լ��� ���� ���

// step 8. ����ڿ��� �Է¹ޱ�.

int main()
{
	const int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	
	int year = 0;
	int month = 0;

	while (1)
	{
		// system �Լ� : ���������Ʈ â���� ����ϴ� �����
		//				() �ȿ� ���ڿ��� ����
		system("cls");

		printf("������ �Է��ϼ���(�����Ͻ÷��� 0) >> ");
		scanf_s("%d", &year);

		if (year == 0)
			break;

		printf("���� �Է��ϼ��� >> ");
		scanf_s("%d", &month);

		if (month < 1 || month > 12)
			continue ;





		int last_year = year - 1;
		int leap_count = last_year / 4 - last_year / 100 + last_year / 400;

		int week_of_day = (year + leap_count) % 7;

		for (int i = 0; i < month - 1; i++)
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

		printf("\n\n����Ϸ��� �ƹ�Ű�� ��������.");

		_getch(); // Ű���� ������ ���� ����ϴ� C ǥ�� �Լ�
	}
}