#include <stdio.h>
#include <conio.h>
#include "xyprintf.h"


//const int UP = 72; // 최신 방법

#define UP 72		// 오래된 방법.
					// 예전 C언어는 const 가 없었습니다.
					// 그래서 매크로 라는 기술 사용(금요일 배우는 주제)



int main()
{
	while (1)
	{
		if (_kbhit() == 1)	// 키보드를 누르면 1 안눌렀으면 0
		{
			int n = _getch();

			if (n == 224) // 특수 키라면
			{
				n = _getch(); // 한번 더 읽어서

				switch (n)
				{
				case UP:
					printf("=====> UP 키보드 누름\n");
					break;
				}
			}

		}

		printf("블럭 떨어짐\n");

		sleep(100);
	}
}
