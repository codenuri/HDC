// 6_���4.c - 38 page
#include <stdio.h>

int main()
{
	int score = 60;

	// 1. ���� �̸��� ������ 0�̸� ����, 0�� �ƴϸ� ��
	if ( score )
	{
		printf("true\n");
	}

	// 2. ��� ��
	if (score == 50)
//	if (score != 50)
//	if (score = 50) // ����.. score�� 50�� ������ score �� ����// �׻� true
	{				
	}

	// ���׸� ���� ���� ������ �캯�� ���ͷ��� �º��� ���⵵ �մϴ�.
	if (50 == score) // �Ǽ��� 50 = score �ϸ� ���� �߻�
	{
	}

//	int n = (score = 50); // C�� ok
						// �ٸ� ���� error
}