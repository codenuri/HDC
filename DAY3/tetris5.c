#include <stdio.h>
#include "xyprintf.h"

// step 5. block.h ���� ���

#include "block.h"

int main()
{
	// block[0] : 1��° ���� 0�� ȸ��
	// block[1] : 1��° ���� 90�� ȸ��
	// block[4] : 2��° ���� 0�� ȸ��

	int block_no = 2;
	int rotate = 0;		// 0 : 0��, 1: 90��, 2 : 180��, 3 : 270��

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[ block_no * 4 + rotate ][y][x] == 1)
				xyprintf(3 + (x * 2), 3 + y, "��");
		}
	}
}
