#include <stdio.h>
#include <stdlib.h>

#include "xyprintf.h"
#include "block.h"
void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);


// step 8. 난수로 블럭번호 결정

int main()
{
	srand(time(0)); // 난수 초기화

	int block_no = 1;
	int rotate = 0;
	int xpos = 5;
	int ypos = 0;

	while (1)
	{
		ypos = 0;

		block_no = rand() % 7; // 0 ~ 6 번블럭중에 임의로 선택

		while (1)
		{
			draw_block(xpos, ypos, block_no, rotate);

			sleep(200);

			erase_block(xpos, ypos, block_no, rotate);

			++ypos;

			if (ypos == 18) break;
		}

	}



}

















void draw_block(int xpos, int ypos, int block_no, int rotate)
{
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[block_no * 4 + rotate][y][x] == 1)
				xyprintf((xpos + x) * 2, ypos + y, "■");
		}
	}
}

void erase_block(int xpos, int ypos, int block_no, int rotate)
{
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[block_no * 4 + rotate][y][x] == 1)
				xyprintf((xpos + x) * 2, ypos + y, "  ");
		}
	}
}