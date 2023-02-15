#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 6. �Լ��� �и�

// �Ʒ� �Լ� ���� ��� ���� ������ ������
void draw_block(int xpos, int ypos, int block_no, int rotate )
{
	// �� ��ȣ�� rotate�� ������ 3���� �迭���� ù��°�ε�������
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[block_no * 4 + rotate][y][x] == 1)
				xyprintf( (xpos+x) * 2, ypos + y, "��");
		}
	}
}

int main()
{
	draw_block(0, 1, 0, 0);
	draw_block(6, 6, 1, 0);
	draw_block(12, 10, 3, 0);

}
