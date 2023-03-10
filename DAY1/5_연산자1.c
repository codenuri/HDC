// 5_연산자1.c - 26 page
#include <stdio.h>

int main()
{
	// 연산자 : +, -, * 등의 기호

	int a = 10;
	int b = 20;

	// 1. 모든 연산자는 우선순위가 있다.
	// => 우선순위를 높이려면 () 사용
	printf("%d\n", a + b * 2);  // 50
	printf("%d\n", (a + b) * 2);// 60

	// 2. 모든 연산자는 결합 방향이 있다.
	int ret = a + b + 20; // 더하기는 => 방향..
						  // a+b 먼저 수행하고 결과에 + 20 수행

	// 3. 중요한 연산자
	printf("%d\n", 10 % 3); // 나머지 연산자 1
							// 10 나누기 3은 몫 3 나머지 1

	// 1증가 방법
	a = a + 1;
	a += 1;		// 위와 동일
	++a;		// 증가 연산자 C/C++ 개발자가 가장 널리 사용.

	// ++ 의 핵심
	int n1 = 3;
	int n2 = 3;

	int r1 = ++n1; // n1이 1증가(4가됨)
				   // 증가된 결과가 r1에도 대입(4가됨)

	int r2 = n2++;	// n2가 1증가(4가 됨)
					// 증가되기 전값(3)을 r2에 넣기

	printf("%d, %d\n", n1, r1); // 4, 4
	printf("%d, %d\n", n2, r2); // 4, 3

	// ++ : C/C++ 에서는 너무나 유명하지만..
	//      요즘나오는 새로운 언어는 지원하지 않는 경우가 많다.
	//		"혼란스러운 문법" 이라는 의미
}