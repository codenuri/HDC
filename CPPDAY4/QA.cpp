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
	// �����Լ� �����ǽ�
	// 1. virtual �־ �ǰ� ��� �˴ϴ�.
	// 2. override �־ �ǰ� ��� �˴ϴ�.
	//    => �ǵ����̸� �� ���̼���
	void draw() const override 
	{
		std::cout << "draw rect" << std::endl;
	}
};
class ChildRect : public Rect
{
public:
	// Rect �� �Ļ� Ŭ���� �־ ��Ģ�� ���� ����
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


