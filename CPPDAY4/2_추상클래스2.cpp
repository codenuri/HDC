#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	virtual ~Shape() {}

	void set_color(int c) { color = c; }
	

	// �����Լ� : �Ļ� Ŭ������ �ݵ�� ������ ���ʿ� ����.
	//          ������ ���ϸ� �⺻ ���� ������ �ٲ�!!

	// ���� �����Լ� : �ݵ�� Ư�� �Լ��� ������ ����

	virtual void draw() const = 0;// { std::cout << "draw shape" << std::endl; }

	// get_area ��
	// 1. ���������Լ��� �ϸ� ��� �Ļ�Ŭ������ �ݵ�� �������ؾ��Ѵ�
	// 2. �����Լ��� �ϰ� -1 �� ��ȯ ����..
	//    �Ŵ��� "��ȯ���� -1"�� ������ "�������Ҽ� ����"��
	//    �ǹ� �Ѵٰ� �ۼ�.!
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


