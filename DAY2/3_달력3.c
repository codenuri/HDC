#include <stdio.h>

// step 3. 1일의 요일 변경하기

// 핵심 1. week_of_day 변수 도입. 요일을 0, 1, 2 ... 의 숫자로 약속
//     2. 화면 출력시 1일이 다른 요일이 될수 있게
//     3. 개행시 시작 요일을 고려해서.. 개행

int main()
{
	int days[12] = { 31, 28, 31, 30,31, 30,31,31,30,31,30, 31 };

	int month = 1; // 1월


	int week_of_day = 3; // 0:일요일, 1:월요일, 2:수요일...로 약속


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