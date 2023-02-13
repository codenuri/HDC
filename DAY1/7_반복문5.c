#include <stdio.h>

// 반복문을 탈출하는 2가지 방법 - 47 page
int main()
{
	int i = 0;

	// 방법 1. 조건식이 false 일때 탈출
	while (i < 10)
	{
		printf("%d\n", i);
		++i;
	}

	// 방법 2. break 로 탈출.
	i = 0;
	while ( 1 )	// 0이 아니면 항상 true, 무한 반복(무한 루프)
	{
		printf("%d\n", i);
		++i;

		if (i == 10)
			break;	// 반복문을 탈출할때 사용하는 명령어.

	}

}
