// tetris1.c
#include <stdio.h>

// step1. �ʿ��� �Լ� �Ұ� : sleep(), xyprintf()
// 
// 
// 1. github.com/codenuri/HDC ����
//    xyprintf.c  
//    xyprintf.h
//    block.h   
//    �޾Ƽ� ���� ������ �������� ( DAY3 )

// 2. ���� ������Ʈ�� 3�� ���� �߰�

// 3. xyprintf.h ��� �����ؼ� ���

#include "xyprintf.h"

int main()
{
	printf("hello\n");

	sleep(10000);	// ��� ���ߴ� �Լ�
					// ���ڴ� milli second 

	xyprintf(10, 10, "hello\n");
}