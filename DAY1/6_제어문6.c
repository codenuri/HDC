#include <stdio.h>

// 1. switch 없어도 if 로 가능합니다.
//    하지만, 조사할 값이 많으면 switch 사용이 간결해 보입니다.

// 2. C언어 : 정수만 가능
//    다른 언어 : 실수, 문자열등도 가능.

// 3. default

// 4. 의도적인 break 생략. - fallthrough 라고 부릅니다.

int main()
{
	int n = 1;

	switch (n)
	{
	case 1:
		printf("1\n");
		printf("one\n");
		break;

	case 3:
		printf("3\n");
		break;

	default: // 위에서 매치되지 않은 모든 값
		printf("other\n");
		break; // 마지막 항목은 생략 가능.	
	}
}