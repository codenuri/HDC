// 6_초기화리스트1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 멤버 초기화 리스트(member initializer list)
	// => 생성자 () 뒤에 : 을 적고 멤버데이타를 초기화 하는것

	Point(int a, int b) : x(a), y(b)  // good
	{
//		x = a; // 이렇게 초기화하는 것은 
//		y = b; // 나쁜 코드(bad)
	}
};

int main()
{
	Point pt(0, 0);
}




