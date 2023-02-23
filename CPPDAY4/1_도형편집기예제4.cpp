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
			for (auto p : v) // 핵심 : p는 Shape* 입니다.
				p->draw();	 // Shape 안에는 draw가없습니다.
							 // error.
						// Shape* 로 모든 도형을 가리킬수 있지만
						// 각 도형의 고유 멤버는 접근 할수 없다.
		}
	}
}
// 위 코드가 왜??? 에러 일까요 ?
// 해결책은 뭘까요 ?? 이 부분이 핵심 입니다.!


