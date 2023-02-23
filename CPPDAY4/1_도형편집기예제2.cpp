#include <iostream>
#include <vector>

// 핵심 2. 모든 도형의 공통의 특징을 담은 기반 클래스(Shape)가 있다면
//        Shape* 로 모든 도형 객체의 주소를 담을수 있다

class Shape
{
public:
	virtual ~Shape() {}	// 모든 기반 클래스는 소멸자가 가상함수이어야!
};

class Rect : public Shape
{
	int left, top, right, bottom;
public:
	Rect(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const { std::cout << "draw circle" << std::endl; }
};

int main()
{
	// 사용자가 1을 입력하면 사각형을 만들고
	//        2을 입력하면 원을 만들고 싶다.
	int cmd;
	std::cin >> cmd;

	Shape* p = nullptr;

	if (cmd == 1)
	{
//		Rect rc(1, 1, 10, 10); // 이렇게 하면 {} 벗어날때 즉시파괴

		p = new Rect(1, 1, 10, 10);// 이렇게 하면 사용자가 delete
							   // 할때 까지 사용가능
	}
	else if (cmd == 2)
	{
		p = new Circle(1, 1, 10, 10);
	}
}



