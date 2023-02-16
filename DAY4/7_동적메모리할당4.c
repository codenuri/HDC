#include <stdio.h> // printf등 입출력함수
#include <stdlib.h> // malloc 등 메모리 관련

int main()
{
	int n = 0;

	// 1. 모든 주소는 void* 에 경고(에러)없이 들어 갈수 있습니다.
	void* p1 = &n; // ok.. 항상 가능
//	int*  p2 = p1; // void* ==> 다른 타입*
					// C++ 에러, 
					// C는 가능하지만 환경에 따라 경고 날수 있습니다
	int* p2 = (int*)p1; // ok


	// 2. 아래 2줄은 완벽히 동일한 크기의 메모리를 할당합니다.
	// => 동일한 메모리를 어떻게 사용할지는 어느 포인터로 담는가에
	//    따라 달라 집니다.

	int*    p3 = (int*)malloc(40);
	double* p4 = (double*)malloc(40);

	free(p3);
	free(p4);

	// 가끔 가독성을 위해 아래 처럼 코딩하라고 합니다.
	int* p5 = (int*)malloc(sizeof(int) * 10);
					// => malloc(40) 과 완벽히 동일한 코드 입니다
	free(p5);
}   