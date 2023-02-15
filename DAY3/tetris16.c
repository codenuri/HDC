#include <stdio.h>
#include <stdlib.h>
#include "xyprintf.h"
#include "block.h"

#define SPECIAL_KEY	 224
#define UP		 72
#define DOWN	 80
#define LEFT	 75
#define RIGHT	 77

#define WIDTH	10
#define HEIGHT	20


int board[HEIGHT + 1][WIDTH + 2] = { 0 };


void draw_block(int xpos, int ypos, int block_no, int rotate);
void erase_block(int xpos, int ypos, int block_no, int rotate);
void game_loop();
void init_board();
void draw_board();


// step 11. ���� �̵��������� ����

// xpos, ypos ��ġ�� ���� �ü� �ִ°� ?
int is_possible(int xpos, int ypos, int block_no, int rotate)
{
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (board[ypos+y][xpos + x] == 1 && block[no][y][x] == 1)
				return 0;
		}
	}
	return 1;
}






int main()
{
	srand(time(0));
	ioHideCursor();

	init_board();
	draw_board();

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

						if ( is_possible( xpos-1, ypos, block_no, rotate) == 1)
							--xpos;
						continue;
	
					case RIGHT:
						erase_block(xpos, ypos, block_no, rotate);
						if (is_possible(xpos + 1, ypos, block_no, rotate) == 1)
							++xpos;
						continue;
					}
				}
			}

			sleep(200);

			erase_block(xpos, ypos, block_no, rotate);


			if (is_possible(xpos, ypos+1, block_no, rotate) == 1)
			{
				++ypos;
			}
			else
			{
				// ���̻� ���� ���� ����.
				break;
			}			
		}

	}
}



void init_board()
{
	for (int y = 0; y < HEIGHT + 1; y++)
	{
		board[y][0] = 1;
		board[y][WIDTH + 1] = 1;
	}

	for (int x = 0; x < WIDTH + 12; x++)
	{
		board[HEIGHT][x] = 1;
	}
}

void draw_board()
{

	for (int y = 0; y < HEIGHT + 1; y++)
	{
		for (int x = 0; x < WIDTH + 2; x++)
		{
			if (board[y][x] == 1)
			{
				xyprintf(x * 2, y, "��");
			}
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
				xyprintf((xpos + x) * 2, ypos + y, "��");
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