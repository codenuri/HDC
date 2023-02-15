// 3_재귀호출1.c - 88 page
#include <stdio.h>

// print(3) ==> print
//				"hello" 출력
//				print(2)	==> print
//				return			"hello" 출력
//								print(1)	==> print 
//								return			"hello" 출력
//												print(0)	==> print
//												return			return;

void print_hello(int n)
{
	if (n == 0) return;

	printf("hello : %d\n", n);

	print_hello(n-1);

	return;
}

int main()
{
	print_hello(3);
}