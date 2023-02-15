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

	print_hello(n - 1);	// 먼저 호출하고 돌아올때 아래 printf 수행
						// 1, 2, 3

	printf("hello : %d\n", n);

//	print_hello(n - 1); // 이렇게 하면 3, 2, 1
						// 먼저 출력하고 재귀 호출.

	return;
}

int main()
{
	print_hello(3);
}