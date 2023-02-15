// 3_재귀호출4.c
#include <stdio.h>

// 아래 함수를 생각해 보세요
int factorial(int n)
{
	if (n == 1) return 1;	// 재귀의 종료!!
							// 모든 재귀 호출은 반드시 종료조건필요

	return n * factorial(n - 1);
		// 5 * f(4)
		//	   4 * f(3)
		//		   3 * f(2)
		//				2 * f(1)
		//					1
}
// 왜 재귀 호출을 사용하나요 ?
// => 일부 알고리즘(문제해결)시 재귀 호출을 사용하면 편리할때가 있습니다.
// => 그런데, 재귀 호출로 만드는 코드는 루프로도 만들수 있습니다.

int factorial_loop(int n)
{
	int ret = 1;

	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main()
{
	int ret = factorial(5);

	printf("%d\n", ret);
	printf("%d\n", factorial_loop(5));
}