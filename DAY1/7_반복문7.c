
#include <stdio.h>

// �ݺ��� �ȿ��� break, continue �� ���� �θ� ���˴ϴ�.
// �Ʒ� �ڵ� �ݵ�� �����ؾ� �մϴ�

int main()
{
	// �ֹ� �޴� Ű����ũ�� ������ ���ô�.
	int n = 0;

	while (1)
	{		
		printf("1. ���\n");
		printf("2. ���\n");
		printf("3. ����\n");
		printf("4. ����\n");
		printf("�޴��� �����ϼ��� >> ");

		scanf_s("%d", &n);

		if (n == 4)
			break;	// �޴� ����

		if (n < 1 || n > 3)
			continue;	// �Ʒ� �� ���� ���� ����
						// �ݺ��� ó������ �̵�



		switch (n)
		{
			// �Ʒ� break �� ���� Ż���� �ƴ� switch Ż��
		case 1: printf("�ֹ濡 ��� �ֹ���\n"); break;
		case 2: printf("�ֹ濡 ��� �ֹ���\n"); break;
		case 3: printf("�ֹ濡 ���� �ֹ���\n"); break;
		}		
	}

}