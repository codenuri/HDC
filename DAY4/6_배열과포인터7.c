#include <stdio.h>

//void foo(int x[7]) // 7�� ¥�� �迭�ƴմϴ�. ������ �Դϴ�.
//void foo(int* x)	 // ���ڵ尡 ������ �������� �����ϴ�.

// �迭�� �Լ� ���ڷ� ��������, 1��° ��� �ּҿ�, ������ �޴°���
// ���� �Դϴ�.
void foo(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", p[i]);
	}
}

int main()
{
	int x[5] = { 1,2,3,4,5 };
	int y[3] = { 1,2,3 };

	// foo �� ���ڴ� int* �̹Ƿ� x, y ��� ���ް����մϴ�.
	foo(x, 5);
	foo(y, 3);
}