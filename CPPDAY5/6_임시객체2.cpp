#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 핵심 : 임시객체의 특징
int main()
{
	Point pt(1, 2);

	// 1. 

	pt.x = 10;			// ok
	Point(1, 2).x = 10;	// error. 임시객체는 등호의
						//		왼쪽에 올수 없다.


	Point& r1 = pt;			// ok	
	Point& r2 = Point(1, 2);// error.
							// 임시객체는 참조로 가리킬수없다

	const Point& r3 = Point(1, 2); // ok
							// 임시객체는 const 참조로는							// 
							// 가리킬수 있다.
					// 이제, 임시객체의 수명은 r3의 수명으로
					// 연장됩니다.
}





