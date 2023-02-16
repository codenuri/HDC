#include <stdio.h>
#include <stdlib.h>

int main()
{
	int buf_size = 4;	// ����(score) ũ��
	int cnt = 0;		// ����� �Է��� ����

//	int score[4] = { 0 }; // �̷��� ����� �ʿ������ ��� ���žȵȴ�
	
	int* score = (int*)malloc(sizeof(int) * buf_size);
							// �̷��� ����� �ʿ� ������ ���� ����

	int n = 0;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == -1) break;

		score[cnt] = n;
		++cnt;

		if (cnt == buf_size)
		{
			// 1. "����ũ�� + 4" �� ���ο� ���� �Ҵ� 
			int* tmp = (int*)malloc(sizeof(int) * (buf_size + 4) );


			// 2. ���� ����(�޸�) ������ ���ο� ���ۿ� ����
			for (int i = 0; i < buf_size; i++)
			{
				tmp[i] = score[i];
			}

			// 3. ���� ���� ����
			// => �Ʒ� �ڵ�� score �� ���Ű� �ƴ�
			//    score �� ����Ű�� �޸� ����
			free(score);

			// 4. score ������ ������ ���ο� ���۸� ����Ű����
			score = tmp;

			// 5. �������������� ?
			buf_size = buf_size + 4;
		}
	}
	//----------------------
	printf("�Էµ� ���� : %d\n", cnt);
	printf("�Ҵ�� ���� : %d\n", buf_size);

	for (int i = 0; i < cnt; i++)
	{
		printf("%d, ", score[i]);
	}

	printf("\n");

	// ���̻� ���۰� �ʿ� ������ �������� �� ���켼��.
	free(score);
}
// �����ؼ� 9���� �Է��ϰ� -1 �Է��� ������.

// ���̽� �غ��Ź�
//s = [1, 2, 3]    // �����δ� 4�� ���ӵ� �޸� (malloc(4))
//s.insert(0)      // ���� �Ҵ� �ʿ� ����.
//s.insert(0)      // 8�� ���Ӱ� �Ҵ���, ���� �޸� ������, 
					// �����޸� ����

// �ڷ� ����(data structure) �� ?

// => ���α׷� �����߿� �����Ǵ� ����Ÿ�� �޸𸮿� ��� �����Ұ��ΰ�?
//    �� ���� �й�

// => �� �ڵ尡 "���� �迭(���� vector)" �Դϴ�.
//    ũ�� ������ ������ �迭 �̶�� �ǹ�.

