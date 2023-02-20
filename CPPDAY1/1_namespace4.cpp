// 10 page 내용입니다.

//#include <stdio.h>  // C 언어 헤더
					// 모든 함수가 global namespace 에 있다
					// global namespace: 어떤 이름공간도
					//			포함되지 않은곳.

#include <cstdio>	// C++ 에서 새로 만든 헤더
					// printf 가 전역에도 있고
					// std 안에도 있다.

// C++ 은 기존의 모든 C 헤더를 C++ 버전으로 새롭게 제공

// C				C++
// <xxx.h>		=>  <cxxx>
// <stdio.h>	=>	<cstdio>
// <string.h>	=>  <cstring>
// <stdlib.h>	=>  <cstdlib>


int main()
{
	// printf 는 C언어 표준이지만
	// C++언어의 표준이기도 합니다.

	printf("hello\n"); // ok
	std::printf("hello\n"); // ??
}
