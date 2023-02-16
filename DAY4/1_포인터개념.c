// 1_포인터개념.c
#include <stdio.h>

void add_sub(int a, int b,     // in parameter(인자)
			 int* p1, int* p2) // out parameter
{
	*p1 = a + b;
	*p2 = a - b;
}




int main()
{
	// 1. 포인터 변수란 ?
	// => 다른 변수의 주소를 담는 변수
	int n = 10;
	int* p = &n;

	// 2. 포인터 변수가 가리키는 메모리 따라가기(* 연산자)
	// => "역참조(dereferencing)" 이라고 합니다.
	*p = 20; // 결국 n = 20

	// 3. 왜 포인터를 사용하나요 ?
	// => 여러가지 이유가 있지만..
	// => 1. 함수에서 여러개 값을 꺼내 오고 싶을때
	int s1 = 0;
	int s2 = 0;

	add_sub(10, 20, &s1, &s2);
				// call by reference(pointer, address)

}