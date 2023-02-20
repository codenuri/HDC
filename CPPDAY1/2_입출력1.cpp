
#include <cstdio>	// 또는 <stdio.h>
					// C 스타일 입출력

#include <iostream> // C++ 의 입출력 객체를 사용하기위해

int main()
{
	int n = 10;

	// C style 출력
	printf("n = %d\n", n); // C style

	// C++ style
	std::cout << "n = " << n << std::endl;
								// std::endl : 개행

	// printf    : 함수
	// std::cout : 객체 입니다. 지금은 사용법만 익히세요
	//			   금요일날 만드는 방법 배웁니다.

	// 표준 입력
	scanf_s("%d", &n);  // C

	std::cin >> n;	    // C++,  &n 아닙니다. n 입니다.

	// 참고 : C++23 부터는 아래처럼 합니다.
//	std::println("{0} {1}", 10, n);
}
