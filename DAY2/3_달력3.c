#include <stdio.h>

// step 3. 1���� ���� �����ϱ�

// �ٽ� 1. week_of_day ���� ����. ������ 0, 1, 2 ... �� ���ڷ� ���
//     2. ȭ�� ��½� 1���� �ٸ� ������ �ɼ� �ְ�
//     3. ����� ���� ������ ����ؼ�.. ����

int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int month = 1; // 1��


	int week_of_day = 3; // 0:�Ͽ���, 1:������, 2:������...�� ���


	printf(" SUN MON TUE WED THU FRI SAT\n");


	for (int i = 0; i < week_of_day; i++)
	{
		printf("    ");
	}


	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ( (i + week_of_day) % 7 == 0)
			printf("\n");
	}
}