#include <stdio.h>
#include "xyprintf.h"
#include "block.h"

// step 6. 함수로 분리

// 아래 함수 인자 어떻게 할지 생각해 보세요
void draw_block(int xpos, int ypos, int block_no, int rotate )
{
	// 블럭 번호와 rotate를 가지고 3차원 배열에서 첫번째인덱스결정
	int no = block_no * 4 + rotate;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[block_no * 4 + rotate][y][x] == 1)
				xyprintf( (xpos+x) * 2, ypos + y, "■");
		}
	}
}

int main()
{
	draw_block(0, 1, 0, 0);
	draw_block(6, 6, 1, 0);
	draw_block(12, 10, 3, 0);

}
