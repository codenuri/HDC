// 1_namespace3.cpp - 9page 내용
// C 언어 헤더 : .h 로 되어 있다.
// C++언어헤더 : .h 가 없다.
#include <algorithm>
//using namespace std;

// 핵심 : C++ 표준의 모든 함수는 "std" 라는 이름공간안에
//       있습니다.

int main()
{
//	int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요

	int n = std::min(3, 2); // ok

//	using namespace std;
	int n2 = min(10, 3);
}
