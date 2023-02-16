#include <stdio.h>
#include <stdlib.h>

int main()
{
	int buf_size = 4;	// 버퍼(score) 크기
	int cnt = 0;		// 사용자 입력의 갯수

//	int score[4] = { 0 }; // 이렇게 만들면 필요없을때 즉시 제거안된다
	
	int* score = (int*)malloc(sizeof(int) * buf_size);
							// 이렇게 만들면 필요 없을때 제거 가능

	int n = 0;

	while (1)
	{
		scanf_s("%d", &n);

		if (n == -1) break;

		score[cnt] = n;
		++cnt;

		if (cnt == buf_size)
		{
			// 1. "기존크기 + 4" 의 새로운 버퍼 할당 
			int* tmp = (int*)malloc(sizeof(int) * (buf_size + 4) );


			// 2. 기존 버퍼(메모리) 내용을 새로운 버퍼에 복사
			for (int i = 0; i < buf_size; i++)
			{
				tmp[i] = score[i];
			}

			// 3. 기존 버퍼 제거
			// => 아래 코드는 score 의 제거가 아닌
			//    score 가 가리키는 메모리 제거
			free(score);

			// 4. score 포인터 변수가 새로운 버퍼를 가리키도록
			score = tmp;

			// 5. 마지막남은것은 ?
			buf_size = buf_size + 4;
		}
	}
	//----------------------
	printf("입력된 갯수 : %d\n", cnt);
	printf("할당된 버퍼 : %d\n", buf_size);

	for (int i = 0; i < cnt; i++)
	{
		printf("%d, ", score[i]);
	}

	printf("\n");

	// 더이상 버퍼가 필요 없으면 종료전에 꼭 지우세요.
	free(score);
}
// 실행해서 9개쯤 입력하고 -1 입력해 보세요.




