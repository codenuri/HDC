// 6_제어문1.c
#include <stdio.h>

// 모든 C 프로그램은 
// => main 함수의 1번째 줄 부터 순차적으로 실행됩니다.
// 
// 실행 순서를 변경하려면 "제어문(control statement)" 사용
// => 조건문 : if, switch  등 2개
// => 반복문 : while, do-while, for 등 3개

// 1. 조건문 if : 조건을 만족할때만 문장 실행
// => 실행할 문장이 한줄이면 {} 은 생략가능
int main()
{
//	int age = 20;
	int age = 10;

	// 아래 처럼 블럭을 여는 것이 요즘 가장 널리 사용됩니다.
	if (age > 18) {
		printf("성인\n");
	}
	else
	{
		printf("성인 아님\n");
	}

	printf("이 부분은 항상 실행\n");
}


