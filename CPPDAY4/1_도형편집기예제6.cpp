#include <iostream>
#include <vector>

// 핵심 4. 기반 클래스가 가진 멤버 함수중에서
//        파생 클래스가 재정의(override) 하는 것은
//        반드시 가상함수 이어야 한다.

class Shape
{
	int color;	// 모든 도형은 색상이 있다.
public:
	virtual ~Shape() {}

	// 아래 함수는 virtual로 할까요 ? 하지 말까요 ?
	// => 파생 클래스가 재정의 할 필요 없다. non-virtual
	// => virtual 해도 되지만, virtual 은 느리다.!
	void set_color(int c) { color = c; }

	// 아래 함수는 virtual로 할까요 ? 하지 말까요 ?
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
};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const override { std::cout << "draw circle" << std::endl; }
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


