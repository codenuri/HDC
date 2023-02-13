#include <stdio.h>

int main()
{
	int score = 60;

	// 조건식을 만드는 방법 - 38 page
//	if (score > 60) // 61 부터 true
//	if (score >= 60) // 60 부터 true
//	if (score >= 60 && score < 90 ) // 양쪽이 모두 참일때60 ~ 89
	if (score <= 30 || score >= 90) // 둘중 한개라도 참이면 true
	{								// 30보다 작거나 90보다 큰 경우true
		
	}

	// 다음 코드 실행 결과 예측해 보세요
	int n = 3;
	score = 60;

//	if (score > 50 || ++n > 5) // 앞이 참이므로 뒤는 실행안함
	if (score > 50 && ++n > 5) // 앞이 참이라도 2번째 조건식 실행
	{
	}
	printf("%d\n", n); // 결과 예측 하세요.
}


