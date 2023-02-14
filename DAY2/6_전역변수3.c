#include <stdio.h>
// 전역변수(global variable)
// => 어떠한 함수에도 포함되지 않은 변수
// 1. 프로그램 시작시 생성되고, 프로그램 종료시 파괴
// 2. 모든 함수에서 접근 가능
// 3. 초기값 생략시 자동으로 0으로 초기화
//int g = 0;
int g; // 0으로 초기화!

void foo()
{
	g = 20;
}

int main()
{
	g = 10;
	foo();
	printf("%d\n", g);

}