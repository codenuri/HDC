#include <stdio.h>

// 변수의 다양한 속성 얻는 방법 - 중요! 23 page
int main()
{
	int n = 10;

	printf("%d\n", n);
	
	// 핵심 : 주소는 &n 구하고, 출력시 %p 사용
	printf("%d\n", &n); // 주소를 10진수로
	printf("%x\n", &n); // 주소를 16진수로
	printf("%p\n", &n); // 주소를 16진수로

	// sizeof 해당 변수의 메모리 크기 구하기.
	// 출력시, 부호 여부에 따라...
	printf("%d\n", sizeof n );	// 변수의 크기
	printf("%d\n", sizeof(n));	// () 가 있어도 됩니다.

	printf("%d\n", sizeof(double)); // 타입을 넣을수도 있습니다.
								// 이 경우는 반드시 () 사용
}