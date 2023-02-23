#include <iostream>
#include <vector>

// ��ü���� SW ������ 5�� ��Ģ
// SRP, OCP, LSP, ISP, DIP => ���ڷ� SOLID ��� �մϴ�.

// OCP 
// ��� Ȯ�忡�� ���� �ְ�(Open, Ŭ������ ���߿� �߰��Ǿ)
// �ڵ� �������� ���� �־��(Close, ���� �ڵ�� �������� �ʰ�)
// �Ѵٴ� ��Ģ(Principle)

// ���� ����� ��Ģ(Open Close Principle )

// ������ ����� �ڵ�� OCP �� �����ϴ� ���� �ڵ��̴�.

// C  : ��� �����ұ� ???!! �߽�
// C++ : ���� �������� ������ ���� �������� ?




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
				p->draw(); // �ٽ�
		}
	}
}
// p->draw(); <== �� �ڵ�� 

// ������ ǥ����(�Լ�ȣ��)�ε�, 
// ��Ȳ(������ü)�� ���� �ٸ��� �����ϰ� �մϴ�.

// "������(Polymorphism)" �̶�� �մϴ�.

// ��ü���� ����� 3�� Ư¡ : ĸ��ȭ(private), ���, ������

