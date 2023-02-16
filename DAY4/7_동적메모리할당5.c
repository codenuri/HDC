#include <stdio.h> 
#include <stdlib.h>

int main()
{
	// 메모리 할당하고
	int* p = (int*)malloc(sizeof(int) * 10);

	// 해지 하지 않으면
	// => 프로그램 종료시 까지 계속 남아있습니다.
	// 
	// 대부분의 OS : 프로그램 종료시 해당 프로그램이 사용하던 메모리회수/
	// 일부 임베디드: 재부팅 전까지 계속 사용중일수 있습니다.
}