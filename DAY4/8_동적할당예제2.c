#include <stdio.h>
#include <stdlib.h>

// 1. ����ڰ� -1 �� �Է��Ҷ� ���� ��� �Է� �޾� ������
// => while(1) �� �ϰ�, -1 �Է½� break �ϼ���

// 2. �Էµ� ���� ���߿� ����ϱ� ���� ��� ����Ǿ�� �մϴ�.

int main()
{
	int cnt = 0;
	int score[4] = { 0 };	// �̷��� �ϸ�
							// 5�� �̻� �Է½� ���� �߻�!!

	int n = 0;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == -1) 
			break;

		score[cnt] = n;
		++cnt;
	}

}





