#include <stdio.h>

int main()
{
	int age = 10;

	// 1. 실행할 문장이 한줄이면 {} 생략 가능.
	if (age > 18) 
		printf("성인\n");
		printf("입니다.\n");		// <= 주의 이부분은 항상 실행

	// 2. if ~ elseif ~ else
	if (age > 20)
	{
	}
	else if (age > 10)
	{	
		// 11 ~ 20
	}
	else
	{
	}
}


