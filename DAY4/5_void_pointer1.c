// 5_void_pointer1.c - 154 page
#include <stdio.h>

int main()
{
	int n = 0;
//-----------------------------------------------
//	char* p1 = &n;  // 메모리 해석 방식 변경
					// 명시적 캐스팅 없으면 경고

	//---------------------------------------
	// void : 없다는 의미. 
	// void 타입의 변수는 만들수 없다.
	// void a; // error

	// 핵심 : void 타입의 포인터 변수는 만들수 있습니다.
	void* p2 = &n; // 핵심.
}