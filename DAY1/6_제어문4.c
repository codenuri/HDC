// 6_제어문4.c - 38 page
#include <stdio.h>

int main()
{
	int score = 60;

	// 1. 변수 이름만 넣으면 0이면 거짓, 0이 아니면 참
	if ( score )
	{
		printf("true\n");
	}

	// 2. 상등 비교
	if (score == 50)
//	if (score != 50)
//	if (score = 50) // 버그.. score에 50을 대입후 score 를 조사// 항상 true
	{				
	}

	// 버그를 막기 위해 변수를 우변에 리터럴을 좌변에 놓기도 합니다.
	if (50 == score) // 실수로 50 = score 하면 에러 발생
	{
	}

//	int n = (score = 50); // C는 ok
						// 다른 언어는 error
}