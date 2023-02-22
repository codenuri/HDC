#include <iostream>

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
		// 멤버 데이타 이름과 인자의 이름이 동일하면
		// => 에러는 아니고 x 사용시 인자를 의미 합니다.
		x = x;	 // 인자 x = 인자 x

		this->x = x; // 멤버 x = 인자 x
		this->y = y;

		// this 활용 1.
		// => 이름 충돌시 멤버임을 명확히 표기하기 위해
	}
	// 활용 2. this 를 반환하면 멤버 함수를 연속적으로 
	//	      호출 가능합니다.
	Point* foo() { return this; }
	//Point  goo() { return *this; }
	Point&  goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

//	p1.foo()->foo()->foo()->foo();
//	p1.goo().goo().goo().goo();

//	std::cout << "A" << "B" << "C" << "D";
	//cout.operator<<("A").operator<<("B").operator<<("C")
}
