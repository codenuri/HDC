#include <stdio.h>
#include "xyprintf.h"
#include "block.h"
void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);


// step 7. ºí·° ¶³¾î ¶ß¸®±â.

int main()
{
	int block_no = 1;
	int rotate = 0;
	int xpos = 5;
	int ypos = 0;

	while (1)
	{
		ypos = 0;

		while (1)
		{
			draw_block(xpos, ypos, block_no, rotate);

			sleep(500);

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
				xyprintf((xpos + x) * 2, ypos + y, "¡á");
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