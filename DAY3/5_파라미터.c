// 5_파라미터.c
#include <stdio.h>

// 인자로 받은 2개의 정수의 덧셈과 뺄셈 결과를 반환하고 싶다.
// => 함수의 반환값은 한개만 만들수 있다.

// 함수 "인자"를 "파라미터(parameter)" 라고도 합니다.

// in parameter  : 함수에 값을 전달하는 파라미터
// out parameter : 함수에서 값을 꺼내오기 위한 파라미터
//					(메모리 주소를 전달)

int add_sub(int a, int b, int *out)
{
	*out = a - b;

	return a + b;
}

int main()
{
	int r2 = 0;
	int r1 = add_sub(10, 3, &r2);

	printf("%d, %d\n", r1, r2);


	int n = 0;

	// 사용자 입력을 n에 담아 오고 싶다
	scanf_s("%d", &n );
}