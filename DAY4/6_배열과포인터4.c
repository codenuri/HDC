// 6_배열과포인터4.c
#include <stdio.h>

// 함수에 배열을 전달하면 받을때 포인터로 받으면 됩니다.
// => 배열의 이름은 1번째 인자의 주소로 변환 될수 있으므로
//void foo(int* p)
//void foo(int p[3]) // 에러 아니지만 배열 아닙니다. 포인터 입니다.
void foo(int p[])    // 에러 아닙니다. 결국 int*  입니다.
{
	// 포인터는 배열 처럼 사용가능하므로, [] 접근 가능합니다.
	printf("%d\n", p[1]); // 2   *(p+1) 과 동일

}

int main()
{
	int x[3] = { 1,2,3 };

	// 핵심 1. 배열을 함수 인자로 전달하기
	foo(x);
}

