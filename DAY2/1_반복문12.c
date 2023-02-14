// 1_반복문12.c
#include <stdio.h>

// 핵심 : for 문 - 57 page
int main()
{
	int i = 0;		// 1. 반복 계수를 관리할 변수 선언(초기화)
		
	while (i < 10)	// 2. 반복을 위한 조건식
	{
		printf("%d\n", i);	// 3. 반복할 문장 작성

		++i;		// 4. 반복을 위한 변수 값 증가
	}

	// while : 반복을 위한 기본 코드가 떨어져 있다.
	// for   : 반복을 위한 기본 코드 한줄로 표현된다.
	int count = 0;

	for (count = 0; count < 10; ++count)
	{
		printf("%d\n", count);
	}
	// while vs for - 59 page
	// 1. 반복의 횟수가 명확할때 : for 문이 좋습니다.(가독성)
	// 2. 조건에 따른 반복      : while 문이 좋습니다.

	// 1 ~ 100 까지 반복 :  for 사용하세요
	// 사용자가 -1을 입력할때 까지 반복 : while, do - while 권장
	
}


