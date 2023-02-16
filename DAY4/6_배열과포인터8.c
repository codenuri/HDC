#include <stdio.h>

int array_sum(int* p, int sz)
{
	int s = 0;

	for (int i = 0; i < sz; i++)
		s += p[i];

	return s;
}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int s = array_sum( x, 10 );

	printf("%d\n", s); // 55나오게 해보세요.
}