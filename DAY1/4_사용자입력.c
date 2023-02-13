//#define _CRT_SECURE_NO_WARNINGS  // scanf() 함수 사용하게 해달라

// 4_사용자입력.c
#include <stdio.h>

// 출력 : printf
// 입력 : scanf 또는 scanf_s 사용
//		권장 : scanf_s  사용, 보안상 안전한 버전

int main()
{
	// 사용자 에게 값을 입력 받으려면
	// 1. 입력된 값을 보관할 변수 선언
	int n = 0;

	// 2. scanf 함수를 사용해서 입력
//	scanf("%d", &n);  // 핵심 : 반드시 주소를 전달해야 합니다.
					  //       이유는 "포인터" 개념 배울때

	scanf_s("%d", &n);

	printf("입력된 값 : %d\n", n);
}
// 2:00 에 시작 합니다.