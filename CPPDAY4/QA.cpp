// QA
#include <iostream>

class Shape
{
public:
	virtual void draw() const
	{
		std::cout << "draw shape" << std::endl;
	}
	virtual ~Shape() {}
};
class Rect : public Shape
{
public:
	// 가상함수 재정의시
	// 1. virtual 있어도 되고 없어도 됩니다.
	// 2. override 있어도 되고 없어도 됩니다.
	//    => 되도록이면 꼭 붙이세요
	void draw() const override 
	{
		std::cout << "draw rect" << std::endl;
	}
};
class ChildRect : public Rect
{
public:
	// Rect 의 파생 클래스 있어도 규칙은 위와 동일
	void draw() const override
	{
		std::cout << "draw child rect" << std::endl;
	}
};
int main()
{
	Shape* p1 = new Rect;
	Shape* p2 = new ChildRect;
	Rect*  p3 = new ChildRect;

	p1->draw();
	p2->draw();
	p3->draw();

	delete p1;
	delete p2;
	delete p3;
}


