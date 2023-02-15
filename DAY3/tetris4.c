#include <stdio.h>
#include "xyprintf.h"

// step 4. 블럭은 한개가 아니라 여러개 이다.
// => 3차 배열 사용. 

int main()
{
	int block[28][4][4] = {
		{
			{ 0, 0, 0, 0 },
			{ 0, 1, 0, 0 },
			{ 1, 1, 1, 0 },
			{ 0, 0, 0, 0 },
		},
		{
			{ 0, 1, 0, 0 },
			{ 0, 1, 0, 0 },
			{ 0, 1, 0, 0 },
			{ 0, 1, 0, 0 },
		}

	};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (block[1][y][x] == 1)
				xyprintf(3 + (x * 2), 3 + y, "■");
		}
	}
}
