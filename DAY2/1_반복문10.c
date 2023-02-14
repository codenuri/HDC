#include <stdio.h>

// do ~ while 반복문
int main()
{
	int i = 100;

	while (i < 10)
	{
		printf("while 문은 조건이 거짓이면 한번도 실행안됨\n");
	}

	do
	{
		printf("do~while 문은 조건이 거짓이라도 한번은 실행\n");
		printf("즉, 한번 실행후 조건 조사\n");

	}while (i < 10);
}
