// 2_������������.c - 86 page
#include <stdio.h>

//int cnt = 0; // ���α׷� ����� ���� �׻� �޸𸮿� �ִ�.
			 // �׷���, ��� �Լ��� ���� ����.
			 // �����ϴ�.

// �Ĵ翡�� ���ǥ�� �����ϴ� �Լ�
int get_wait_number(int count)
{
	// count �ο��� ���� �Դٴ� ���� �����ο� �˸��� ��� ��ȣ ��ȯ
//	int cnt = 0; // �������� : �Լ� ȣ�� ����� �ı�

	static int cnt = 0; // static(����)��������
						// �Լ� ȣ���� ����Ǿ �ı����� �ʴ´�
	++cnt;
	return cnt;
}

int main()
{
	printf("%d\n", get_wait_number(4)); // 1
	printf("%d\n", get_wait_number(3)); // 2
	printf("%d\n", get_wait_number(3)); // 3
}


