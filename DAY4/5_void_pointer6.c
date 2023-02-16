#include <stdio.h>

// �ٽ� 1. �Լ� ���ڷ� void* �� ����ϸ� ��� Ÿ���� �ּҸ�
//		  ������ �ִ�.

// 2. void* �� *p ������ �ȵȴ�. 
//    �ٸ� Ÿ��(���� ���� Ÿ��)�� �����ͷ� ����

// 3. ������ ũ�⸦ �����ؼ� 1����Ʈ�� ��ȯ�ϴ� ���� 
//		���� ũ�� ��ŭ �ݺ�.

// �Ʒ� �ڵ尡 ��� Ÿ���� swap �ϴ� �Լ� �Դϴ�.
// => "Generic(�Ϲ�ȭ��, ��� Ÿ�Կ� ���� ����) swap" �̶�� �մϴ�.
void swap(void* p1, void* p2, int sz)
{
	char* p3 = (char*)p1;
	char* p4 = (char*)p2;

	for (int i = 0; i < sz; i++)
	{
		char temp = *(p3+i);
		*(p3+i) = *(p4+i);
		*(p4+i) = temp;
	}
}

int main()
{
	double x = 2.1;
	double y = 3.4;

	// �ٽ� : swap ����ڰ� ���ڷ� �����ϴ� ������ ũ�⸦ �˷��ش�.
	swap(&x, &y, sizeof(x) );

	printf("%lf\n", x); // 3.4
	printf("%lf\n", y); // 2.1
}