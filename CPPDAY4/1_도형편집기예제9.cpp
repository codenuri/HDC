#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }
	virtual int get_area() { return -1; }
	virtual void draw() const { std::cout << "draw shape" << std::endl; }
};


class Rect : public Shape
{
	int left, top, right, bottom;
public:
	Rect(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const override { std::cout << "draw rect" << std::endl; }

	void rect_method()
	{
		std::cout << "rect method" << std::endl;
	}

};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const override { std::cout << "draw circle" << std::endl; }

	void circle_method()
	{
		std::cout << "circle method" << std::endl;
	}
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
		else if (cmd == 8)
		{
			for (auto p : v) 
			{
				// p : Shape*
				// draw 는 Shape 에 있으므로 
				// p->draw 가능하지만..

				// Rect 만 가진 멤버를 접근하려면 캐스팅 필요
				// 그런데, p가 정말 Rect를 가리키는지 조사후 캐스팅
				if (typeid(*p) == typeid(Rect))
				{
					((Rect*)p)->rect_method();
				}
				else if (typeid(*p) == typeid(Circle))
				{
					((Circle*)p)->circle_method();
				}

				// 단, 위 코드는 OCP 를 만족할까요 ?
				// => 나쁜 디자인의 전형적인 예제
			}
		}
	}
}

