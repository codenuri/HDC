#include <iostream>
#include <vector>


class Shape
{
public:
	virtual ~Shape() {}	
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
	std::vector<Shape*> v;	// 핵심 : Shape* 타입을 보관하면
							//      모든 도형 객체을 보관가능
	while (1)
	{
		int cmd;
		std::cin >> cmd;

		Shape* p = nullptr;

		if (cmd == 1)
		{
			p = new Rect(1, 1, 10, 10);
			v.push_back(p);
		}
		else if (cmd == 2)
		{
			v.push_back( new Circle(1, 1, 10, 10) );
		}
	}
}



