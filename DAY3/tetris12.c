#include <stdio.h>
#include <conio.h>
#include "xyprintf.h"


//const int UP = 72; // �ֽ� ���

#define UP 72		// ������ ���.
					// ���� C���� const �� �������ϴ�.
					// �׷��� ��ũ�� ��� ��� ���(�ݿ��� ���� ����)



int main()
{
	while (1)
	{
		if (_kbhit() == 1)	// Ű���带 ������ 1 �ȴ������� 0
		{
			int n = _getch();

			if (n == 224) // Ư�� Ű���
			{
				n = _getch(); // �ѹ� �� �о

				switch (n)
				{
				case UP:
					printf("=====> UP Ű���� ����\n");
					break;
				}
			}

		}

		printf("�� ������\n");

		sleep(100);
	}
}
