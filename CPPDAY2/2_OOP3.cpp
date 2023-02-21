#include <iostream>

// 핵심 : 타입을 만들때
//		"상태"를 나타내는 데이타와 상태를 가지고 연산을 수행하는
//	    함수를 묶어서 만들자!!

// C 구조체  : 함수를 포함할수 없다.
// C++구조체 : 함수를 포함할수 있다.
// 왜 구조체 안에 함수를 넣는가 ?
// 1. 함수에 별도의 데이타(Rect)를 보낼필요 없다.
// 2. 다양한 C++ 문법을 활용해서 안전한 타입을 만들수 있다

struct Rect
{
	// 멤버 데이타
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수안에서는 멤버 데이타를 바로 접근 가능.
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};



int main()
{
	Rect rc = { 1, 1, 10, 10 };

//	int n1 = getRectArea(rc);	// C 스타일
//	drawRect(rc);				// 함수에 데이타 전달

	int n1 = rc.getArea();	// C++ 스타일
	rc.draw();				// 객체지향 스타일
								// "rc!! 그려봐!"
}