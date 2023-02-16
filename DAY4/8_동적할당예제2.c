#include <stdio.h>
#include <stdlib.h>

// 1. 사용자가 -1 을 입력할때 까지 계속 입력 받아 보세요
// => while(1) 로 하고, -1 입력시 break 하세요

// 2. 입력된 값은 나중에 사용하기 위해 모두 저장되어야 합니다.

int main()
{
	int cnt = 0;
	int score[4] = { 0 };	// 이렇게 하면
							// 5개 이상 입력시 오류 발생!!

	int n = 0;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == -1) 
			break;

		score[cnt] = n;
		++cnt;
	}

}





