#include <stdio.h>

// 1. switch ��� if �� �����մϴ�.
//    ������, ������ ���� ������ switch ����� ������ ���Դϴ�.

// 2. C��� : ������ ����
//    �ٸ� ��� : �Ǽ�, ���ڿ�� ����.

// 3. default

// 4. �ǵ����� break ����. - fallthrough ��� �θ��ϴ�.

int main()
{
	int n = 1;

	switch (n)
	{
	case 1:
		printf("1\n");
		printf("one\n");
		break;

	case 3:
		printf("3\n");
		break;

	default: // ������ ��ġ���� ���� ��� ��
		printf("other\n");
		break; // ������ �׸��� ���� ����.	
	}
}