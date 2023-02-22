// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b)  { x = a; y = b; }

	// 상수 멤버 함수 : 멤버 함수 () 뒤에 const 를 붙이는 문법
	//		=> 해당 멤버 함수안에서는 멤버데이타를 변경하지
	//		   않겠다고 컴파일러에게 알려주는 것
	//      => 상수 멤버 함수에서는 멤버변수 변경안됨
	//      => 상수 객체는 상수 멤버 함수만 호출가능합니다.
//	void print()
	void print() const 
	{			
//		x = 10; // error. 상수 멤버 함수에서는 멤버변수 변경안됨
		std::cout << x << ", " << y << std::endl;
	}
};

int main() 
{
//	Point p(1, 2);
	const Point p(1, 2); // 핵심! 상수객체

//	p.x = 10;		// error. x는 public 이지만 상수이므로
//	p.set(10, 20);	// error.

	p.print();	// error. 
				// 단, print 가 상수 멤버함수라면 에러 아님
}

