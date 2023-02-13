// 7_반복문3.c
// 46 page 아래 도전 과제 1, 2번 해보세요

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
