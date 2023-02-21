#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// 핵심 1. 메모리 layout
	// 1. Rect 변수를 2개 생성하면
	// => 멤버 데이타만 각각 stack 메모리에 놓이게 됩니다.
	// => 멤버 함수는 코드 메모리에 한개만 존재합니다
	//    Rect 형변수가 10개 라도 멤버 함수는 한개 입니다.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16

	// 2. 용어 정리
	int n = 10;
	n = 20;		// n 은 "변" 하는 "수" 입니다.
				// "변수(variable)" 이라고 합니다.

	Rect r = { 1,1,10,10 };
				// r은 "변수" 라고 하지 않고
				// "객체(object)" 라고 합니다.

	// 객체(object) : 세상에 존재하는 모든 것!
	//				원, 사각형, 사람, 자전거, 자동차.. 

	// primitive type 을 메모리에 만든것 : 변수
	// user define type 을 메모리에 만든것 : 객체

	// Rect r 에서 "Rect" 는 타입, "r"은 객체
}
