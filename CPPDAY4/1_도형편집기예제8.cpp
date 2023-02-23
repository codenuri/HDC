#include <iostream>
#include <vector>

// 객체지향 SW 설계의 5대 원칙
// SRP, OCP, LSP, ISP, DIP => 약자로 SOLID 라고 합니다.

// OCP 
// 기능 확장에는 열려 있고(Open, 클래스가 나중에 추가되어도)
// 코드 수정에는 닫혀 있어야(Close, 기존 코드는 수정되지 않게)
// 한다는 원칙(Principle)

// 개방 폐쇄의 법칙(Open Close Principle )

// 다형성 기반의 코드는 OCP 를 만족하는 좋은 코드이다.

// C  : 어떻게 구현할까 ???!! 중심
// C++ : 유지 보수까지 생각한 좋은 디자인은 ?




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
};

class Circle : public Shape
{
	int left, top, right, bottom;
public:
	Circle(int l, int t, int r, int b)
		: left(l), top(t), right(r), bottom(b) {}

	void draw() const override { std::cout << "draw circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	void draw() const override { std::cout << "draw triangle" << std::endl; }
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
				p->draw(); // 핵심
		}
	}
}
// p->draw(); <== 이 코드는 

// 동일한 표현식(함수호출)인데, 
// 상황(실제객체)에 따라 다르게 동작하게 합니다.

// "다형성(Polymorphism)" 이라고 합니다.

// 객체지향 언어의 3대 특징 : 캡슐화(private), 상속, 다형성

