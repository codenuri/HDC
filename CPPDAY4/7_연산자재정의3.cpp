//  5_연산자재정의 - 182page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// 멤버 함수로 만든 operator+
	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);


	Point p3 = p1 + p2;
	Point p4 = p1.operator+(p2);

	// 위 코드는
	// operator+(p1, p2) (일반함수) 또는 
	// p1.operator+(p2) 를 찾게 됩니다.

	//-------------------
	// 1. 멤버와 비멤버를 모두 만들면 에러입니다. 
	//    한개만 만드세요

	// 2. 멤버가 좋을까 ? 비멤버가 좋을까 ?
	// 멤버가 좋다는 주장   : private 접근하기 편하다
	// 비멤버가 좋다는 주장 : 멤버로 만들수 없을때가 있다.

	int n = 0;
	Point p5 = p1 + p2; // p1.operator+(Point)
	Point p6 = p1 + n;  // p1.operator+(int)
	Point p7 = n  + p2; // n.operator+(Point) 인데
						// n 은 primitive 이다.
						// => 멤버로 만들수 없다.
						// operator+(int, Point)로는가능
//	++p1;

	// 연산자 재정의를 지원하는 모든 언어의 원리는 동일합니다.
	// 약속된 함수 호출
	// C++: operator+ 
	// C# : operator+
	// Python : __add__
}



