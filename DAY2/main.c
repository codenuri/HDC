// main.c
#include <stdio.h>

//int add(int, int);

// add 사용자는 add.c를 만든 사람에게
// add.h 를 받아서 아래 처럼 합니다.
#include "add.h" // 이 파일의 내용을 읽어서 이 위치에 
				 // 놓아 달라.

int main()
{
	int ret = add(1, 2);

	printf("result : %d\n", ret);
}

