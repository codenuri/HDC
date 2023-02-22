// 예제1

// C 표준 함수 : 모든 OS 환경의 모든 C/C++ 컴파일러가 지원
//			    입출력은 printf() 같은 몇개 함수
//				GUI 를 만드는 함수는 없다.

// GUI 를 만들려면 : 각 OS 제조사가 배포하는 함수를 사용해서 제작
// => windows : 마이크로소프트가 수천개 함수 배포
//			    visual studio 설치시 사용가능
// 
// => OSX : apple 배포, xcode 설치


#include <stdio.h>	// C/C++ 표준 헤더
					// 모든 OS 환경의 모든 C/C++ 컴파일러가 지원

#include <Windows.h> // MS 가 제공하는 헤더!
					// VS 설치해야만 사용가능

int main()
{
	printf("hello\n");

	MessageBoxA(0, "Hello", "캡션문자열", 0);
			// => 이런 함수는 MS 에서는 "Windows API" 라고 합니다.
			//    "Win32 API" 라고도 합니다.
}



