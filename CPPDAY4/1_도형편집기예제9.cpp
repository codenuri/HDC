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
				// draw �� Shape �� �����Ƿ� 
				// p->draw ����������..

				// Rect �� ���� ����� �����Ϸ��� ĳ���� �ʿ�
				// �׷���, p�� ���� Rect�� ����Ű���� ������ ĳ����
				if (typeid(*p) == typeid(Rect))
				{
					((Rect*)p)->rect_method();
				}
				else if (typeid(*p) == typeid(Circle))
				{
					((Circle*)p)->circle_method();
				}

				// ��, �� �ڵ�� OCP �� �����ұ�� ?
				// => ���� �������� �������� ����
			}
		}
	}
}

