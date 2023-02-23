#include <iostream>
#include <vector>

// �ٽ� 2. ��� ������ ������ Ư¡�� ���� ��� Ŭ����(Shape)�� �ִٸ�
//        Shape* �� ��� ���� ��ü�� �ּҸ� ������ �ִ�

class Shape
{
public:
	virtual ~Shape() {}	// ��� ��� Ŭ������ �Ҹ��ڰ� �����Լ��̾��!
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
	// ����ڰ� 1�� �Է��ϸ� �簢���� �����
	//        2�� �Է��ϸ� ���� ����� �ʹ�.
	int cmd;
	std::cin >> cmd;

	Shape* p = nullptr;

	if (cmd == 1)
	{
//		Rect rc(1, 1, 10, 10); // �̷��� �ϸ� {} ����� ����ı�

		p = new Rect(1, 1, 10, 10);// �̷��� �ϸ� ����ڰ� delete
							   // �Ҷ� ���� ��밡��
	}
	else if (cmd == 2)
	{
		p = new Circle(1, 1, 10, 10);
	}
}



