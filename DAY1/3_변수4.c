#include <stdio.h>

int main()
{
	int n1 = 10;
	
	// 다양한 형태로 출력 가능합니다.
	// 참고 :구글에서 "C format string" 검색하면 예제 많습니다.
	printf("%d\n", n1);		// 10진수
	printf("%x\n", n1);		// 16진수
	printf("%X\n", n1);
	printf("%4d\n", n1);	// "4자리맞춰서 10진수"
	printf("%04d\n", n1);	// "4자리맞춰서 10진수"
}