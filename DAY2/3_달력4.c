#include <stdio.h>

// step 4. 특정 년도의 1월 1일의 요일 구하기

// 알고리즘(algorithm) : 주어진 문제를 해결하는 방법을 찾는 것!

// 주어진 문제 : 특정 년도의 1월 1일의 요일은 어떻게 구할까 ?

// 1. 1년 1월 1일은 월요일 이다.
//    1년 1월 2일은 화요일 이다.
//    1년 1월 8일은 월요일 이다. => 7일뒤이므로
//    2년 1월 1일은 화요일 이다. => 356 % 7 = 1 이므로 
//								1년 경과시 요일 한개 증가!
//	  8년 1월 1일은 화요일 

// 2. year 년의 1월 1일의 
//    week_of_day = year % 7;



int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int year = 2023;
	int month = 1; 

	// 윤년을 고려하지 않을때 year 년 1월 1일의 요일
	int week_of_day = year % 7; 


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