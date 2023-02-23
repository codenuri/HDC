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
			for (auto p : v) // �ٽ� : p�� Shape* �Դϴ�.
				p->draw();	 // Shape �ȿ��� draw�������ϴ�.
							 // error.
						// Shape* �� ��� ������ ����ų�� ������
						// �� ������ ���� ����� ���� �Ҽ� ����.
		}
	}
}
// �� �ڵ尡 ��??? ���� �ϱ�� ?
// �ذ�å�� ����� ?? �� �κ��� �ٽ� �Դϴ�.!


