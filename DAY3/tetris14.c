#include <stdio.h>
#include <stdlib.h>
#include "xyprintf.h"
#include "block.h"
void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);

void game_loop();


// step 10. game loop 함수 분할


#define SPECIAL_KEY	 224
#define UP		 72
#define DOWN	 80
#define LEFT	 75
#define RIGHT	 77


int main()
{
	srand(time(0));
	ioHideCursor(); // xyprintf.h 에 만들어놓은 함수 C 표준함수 아님

	game_loop();
}


void game_loop()
{
	int block_no = 1;
	int rotate = 0;
	int xpos = 5;
	int ypos = 0;

	while (1)
	{
		ypos = 0;

		block_no = rand() % 7;

		while (1)
		{
			draw_block(xpos, ypos, block_no, rotate);

			if (_kbhit() == 1)
			{
				int n = _getch();

				if (n == SPECIAL_KEY)
				{
					n = _getch();

					switch (n)
					{
					case UP:
						erase_block(xpos, ypos, block_no, rotate);
						rotate = (rotate + 1) % 4;
						continue;

					case LEFT:
						erase_block(xpos, ypos, block_no, rotate);
						if (xpos > 0)
							--xpos;
						continue;
						break;

					case RIGHT:
						erase_block(xpos, ypos, block_no, rotate);
						if (xpos < 12)
							++xpos;
						continue;
					}
				}
			}

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