// 4_포인터1.c - 92 page ~ 

#include <stdio.h>

int main()
{
	int n = 10;

	// 핵심 1. 변수 이름 앞에 & 연산자(주소연산자)를 붙이면 
	//		  변수의 메모리 주소를 얻을수 있다.
	printf("%d\n", n);	 // 10
	
	printf("%p\n", &n);  // 주소는 %p 로 출력

//	printf("%d\n", &n);  // %d로 출력해도 되는데,
						 // 보기가 좋지 않습니다.
}