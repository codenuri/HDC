// 7_�ݺ���3.c
// 46 page �Ʒ� ���� ���� 1, 2�� �غ�����

#include <stdio.h>

int main()
{
	int i = 1;

	printf(" SUN MON TUE WED THU FRI SAT\n");

	while (i <= 31)
	{
		printf("%4d", i);	

		if ( i % 7 == 0) 
			printf("\n");

		++i;
	}
}
