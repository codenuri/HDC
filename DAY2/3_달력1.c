// 3_�޷�1.c
#include <stdio.h>

int main()
{
	printf(" SUN MON TUE WED THU FRI SAT\n");

	// 1 ~ 31���� ����� ������.
	for (int i = 1; i <= 31; i++)
	{
		printf("%4d", i);

		if (i % 7 == 0)
			printf("\n");
	}
}