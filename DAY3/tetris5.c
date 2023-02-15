#include <stdio.h>
#include "xyprintf.h"

// step 5. block.h 파일 사용

#include "block.h"

int main()
{
	// block[0] : 1번째 블럭의 0도 회전
	// block[1] : 1번째 블럭의 90도 회전
	// block[4] : 2번째 블럭의 0도 회전

	int block_no = 2;
	int rotate = 0;		// 0 : 0도, 1: 90도, 2 : 180도, 3 : 270도

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[ block_no * 4 + rotate ][y][x] == 1)
				xyprintf(3 + (x * 2), 3 + y, "■");
		}
	}
}
