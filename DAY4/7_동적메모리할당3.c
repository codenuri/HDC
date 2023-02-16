#include <stdio.h>

int g = 0;

int main()
{
	static int s = 0;

	int n = 0;

	int* p = malloc(40);

	printf("&g : %p\n", &g);
	printf("&s : %p\n", &s);
	printf("&n : %p\n", &n);
	printf("&p : %p\n", &p);
	printf("p  : %p\n", p);

	free(p);
}