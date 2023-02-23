#include <iostream>
#include <vector>

// 핵심 3. 모든 파생 클래스(도형)의 공통의 특징이 있다면
//		  반드시 기반 클래스(Shape)에도 있어야 한다.
//		  문법적 규칙이 아니라, 디자인 규칙!!
//		  그래야만 Shape* 로 모든 도형을 묶어서 관리할때
//		  해당 기능을 사용할수 있다.

class Shape
{
public:
	virtual ~Shape() {}

	void draw() const { std::cout << "draw shape" << std::endl; }
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
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			v.push_back(new Rect(1, 1, 10, 10));
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle(1, 1, 10, 10));
		}
		else if (cmd == 9)
		{
			for (auto p : v) 
				p->draw();	 
		}
	}
}


