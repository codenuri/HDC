#include <stdio.h>
#include "xyprintf.h"

// step 3. �Ѱ� �� ����ϱ�
int main()
{
	int block[4][4] = {
		{ 0, 0, 0, 0 },
		{ 0, 1, 0, 0 },
		{ 1, 1, 1, 0 },
		{ 0, 0, 0, 0 },
	};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[y][x] == 1)
				xyprintf(3 + (x*2), 3 + y, "��");
		}
	}
}
