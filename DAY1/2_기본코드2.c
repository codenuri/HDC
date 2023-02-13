// 2_기본코드2.c
// 함수는
// 1. 사용자가 만들수도 있고 - main 함수
// 2. 이미 만들어진 함수를 사용할수도 있습니다.

//    사용법 : 함수이름(약속된 형태의 인자);

// C 코드의 모든 문장을 ;로 끝나야 합니다.
// => 대부분의 언어

// python, swift 는 ; 없어도 됨.

#include <stdio.h>  // printf 가 stdio.h 라는 파일에 있습니다.
					// printf 를 사용하려면 
					// 이 "헤더" 파일을 "포함" 해야 합니다.
int main()
{	
	// " 를 표기하려면 \" 해야 합니다  
	// 10 page escape sequence 참고
	printf("AAA \\ \" \n  BBB");	// 화면에 문자열을 출력하는 기능을 가진
						// C 표준 함수

	printf("CCC\n");
	printf("DDD");
}


// cppreference.com  에 접속해 보세요
