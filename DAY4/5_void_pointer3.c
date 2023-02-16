// 5_void_pointer3.c
#include <stdio.h>

int main()
{
	int n = 0;

	void* p1 = &n;
	void* p2 = &n;

	// 핵심 1. void* 는 상등연산(==, !=) 만 가능하다.

	*p1 = 20;	// *p1를 하려면 : 주소와 타입 정보(메모리크기)가 필요
				// error, void* 는 주소만 있다. 타입정보없다

	p1 + 1;		// error. 대상 체의 크기 만큼 증가해야 하는데
				// 타입 정보가 없다.

	if (p1 == p2) {} // ok. 
}