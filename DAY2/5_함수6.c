// 5_함수6.c

// add 만들어 보세요.
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int n1 = 10;
	int n2 = 20;

	int ret = add(n1, n2);
	printf("결과 : %d\n", ret);

	// 함수 정의가 함수 호출보다 앞에 있다면
	int ret1 = add(n1, n2); // ok
	int ret2 = add(n1);		// error
	int ret3 = add();		// error
}





