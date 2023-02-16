#include <stdio.h>

// 핵심 1. 함수 인자로 void* 를 사용하면 모든 타입의 주소를
//		  받을수 있다.

// 2. void* 는 *p 연산이 안된다. 
//    다른 타입(가장 작은 타입)의 포인터로 변경

// 3. 변수의 크기를 전달해서 1바이트씩 교환하는 것을 
//		변수 크기 만큼 반복.

// 아래 코드가 모든 타입을 swap 하는 함수 입니다.
// => "Generic(일반화된, 모든 타입에 대해 동작) swap" 이라고 합니다.
void swap(void* p1, void* p2, int sz)
{
	char* p3 = (char*)p1;
	char* p4 = (char*)p2;

	for (int i = 0; i < sz; i++)
	{
		char temp = *(p3+i);
		*(p3+i) = *(p4+i);
		*(p4+i) = temp;
	}
}

int main()
{
	double x = 2.1;
	double y = 3.4;

	// 핵심 : swap 사용자가 인자로 전달하는 변수의 크기를 알려준다.
	swap(&x, &y, sizeof(x) );

	printf("%lf\n", x); // 3.4
	printf("%lf\n", y); // 2.1
}