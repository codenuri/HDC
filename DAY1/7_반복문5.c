#include <stdio.h>

// �ݺ����� Ż���ϴ� 2���� ��� - 47 page
int main()
{
	int i = 0;

	// ��� 1. ���ǽ��� false �϶� Ż��
	while (i < 10)
	{
		printf("%d\n", i);
		++i;
	}

	// ��� 2. break �� Ż��.
	i = 0;
	while ( 1 )	// 0�� �ƴϸ� �׻� true, ���� �ݺ�(���� ����)
	{
		printf("%d\n", i);
		++i;

		if (i == 10)
			break;	// �ݺ����� Ż���Ҷ� ����ϴ� ��ɾ�.

	}

}
