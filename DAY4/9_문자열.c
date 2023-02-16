// 9_문자열.c
#include <stdio.h>

int main()
{
	// 1. 컴퓨터는 0, 1만 보관 가능합니다.
	// int 타입 정수 3을 보관하면 
	// => 00000000,00000000,00000000,00000011 을 메모리에 보관

	// float 타입 3.4 를 보관하면
	// => 11 과 100 을 적절히 분리해서 32비트로 보관

	// 2. 결국 컴퓨터는 정수와 실수만 보관 가능합니다.

	int n = 65;

	printf("%d\n", n); // n 의 값을 "10진수"로 출력
	printf("%c\n", n); // 핵심 "%c"
					   // n 의 값을 약속된 문자로 출력

	// 3. 결국, 문자를 보관하는 것은 약속된 정수값을 보관하는것
	// => 119 page, ascii 코드

	// 4. 아래 2줄은 완전히 동일합니다
	int n1 = 65;
	int n2 = 'A'; // A로 약속된 정수를 사용


}