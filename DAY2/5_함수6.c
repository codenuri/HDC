// 5_�Լ�6.c

// add ����� ������.
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int n1 = 10;
	int n2 = 20;

	int ret = add(n1, n2);
	printf("��� : %d\n", ret);

	// �Լ� ���ǰ� �Լ� ȣ�⺸�� �տ� �ִٸ�
	int ret1 = add(n1, n2); // ok
	int ret2 = add(n1);		// error
	int ret3 = add();		// error
}





