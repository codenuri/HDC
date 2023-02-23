#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }
	

	// 가상함수 : 파생 클래스가 반드시 재정의 할필요 없다.
	//          재정의 안하면 기본 구현 제공해 줄께!!

	// 순수 가상함수 : 반드시 특정 함수를 만들라고 지시

	virtual void draw() const = 0;// { std::cout << "draw shape" << std::endl; }

	// get_area 를
	// 1. 순수가상함수로 하면 모든 파생클래스는 반드시 재정의해야한다
	// 2. 가상함수로 하고 -1 을 반환 한후..
	//    매뉴얼에 "반환값이 -1"이 나오면 "면적구할수 없음"을
	//    의미 한다고 작성.!
	virtual int get_area() { return -1; }
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


