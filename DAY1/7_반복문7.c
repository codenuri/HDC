
#include <stdio.h>

// 반복문 안에서 break, continue 는 아주 널리 사용됩니다.
// 아래 코드 반드시 이해해야 합니다

int main()
{
	// 주문 받는 키오스크를 생각해 봅시다.
	int n = 0;

	while (1)
	{		
		printf("1. 라면\n");
		printf("2. 김밥\n");
		printf("3. 국수\n");
		printf("4. 종료\n");
		printf("메뉴를 선택하세요 >> ");

		scanf_s("%d", &n);

		if (n == 4)
			break;	// 메뉴 종료

		if (n < 1 || n > 3)
			continue;	// 아래 로 내려 가지 말고
						// 반복문 처음으로 이동



		switch (n)
		{
			// 아래 break 는 루프 탈출이 아닌 switch 탈출
		case 1: printf("주방에 라면 주문됨\n"); break;
		case 2: printf("주방에 김밥 주문됨\n"); break;
		case 3: printf("주방에 국수 주문됨\n"); break;
		}		
	}

}