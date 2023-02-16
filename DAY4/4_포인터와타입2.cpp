// 4_포인터와타입2.c
#include <stdio.h>

int main()
{
	// 핵심 1. 아래 코드는 int(4바이트 정수 메모리) 를
	//		  1바이트 단위(char)로 접근하는 코드
	int n = 0;
	char* p = &n;

	*(p + 2) = 0x88;
	*(p + 3) = 0x77;

	printf("%x\n", n);  // 결과 예측해 보세요.
						// 00880000
						// 77880000 나오게 p를 사용해서 넣어 보세요
	//-----------------------------------------
	// 핵심 2. 
	int a = 0;
	double* p1 = &a;
	 
	*p1 = 3.4;	// 어떻게 될지 잘생각해 보세요
				// 메모리 그림을 생각하세요.
				// 4바이트 메모리에
				// 8바이트로 "write" 하게 되므로 잘못된코드
				// 아주 위험. 
}