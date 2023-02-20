﻿// 3_변수6.cpp   25 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	// 구조체의 각 항목에서 값을 꺼내는 전통적인 기술
	int x = pt.x;
	int y = pt.y;

	// C++17의 새로운 기술
	// "structure binding" 이라는 이름을 가진 기술.
	auto [a1, a2] = pt; // int a1 = pt.x
						// int a2 = pt.y

	// 배열도 됩니다.
	int arr[3] = { 1,2,3 };

	auto [a, b, c] = arr; // ok.

//	auto [a, b] = arr; // error. 갯수 틀림.

//	int [a, b, c] = arr; // error. auto 만 가능

	// 파이썬
//	t = (1,2,3)
//	a, b, c = t
}





// 현재 대부분의 C++ 컴파일러 : C++14 문법 사용
// C++17 이상 사용하려면 옵션 필요

// g++ 소스이름.cpp -std=c++17
// cl  소스이름.cpp /std:c++17
//			또한, cl 컴파일러는 "/std:c++latest" 가능.
