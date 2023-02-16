// 8_동적할당예제1.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 1. 사용자에게 2개의 정수를 입력 받고 싶다.
	// => 2개의 변수 필요

	// 2. 사용자에게 10개의 정수를 입력 받고 싶다.
	// => 크기가 10개인 배열이 좋다.

	// 3. 실행시간에 사용자가 입력 한 크기의 메모리가 필요하다.
	int cnt = 0;

	printf("학생수는 몇명인가요 >> ");

	scanf_s("%d", &cnt);

	// 학생수 만큼 점수를 관리하기 위해 메모리 필요
	// int score[cnt];	// 일부 C 컴파일러는 배열의 크기로
					// 변수를 넣을수 없다.
					// gcc 는 가능, cl(vc) 은 안됨

	// 실행시간 결정된 크기로 메모리 할당을 하는
	// 가장 안전한 방법은 "동적 메모리 할당"
	int* score = (int*)malloc(sizeof(int) * cnt);

	// score 는 포인터 지만 배열처럼 사용가능
	score[0] = 10;
	score[1] = 20;

	// 사용후 필요 없으면 꼭 지우세요
	free(score);

}





