//  5_������������ - 182page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	// ��� �Լ��� ���� operator+
	Point operator+(const Point& pt) const 
	{
		std::cout << "member operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);


	Point p3 = p1 + p2;
	Point p4 = p1.operator+(p2);

	// �� �ڵ��
	// operator+(p1, p2) (�Ϲ��Լ�) �Ǵ� 
	// p1.operator+(p2) �� ã�� �˴ϴ�.

	//-------------------
	// 1. ����� ������ ��� ����� �����Դϴ�. 
	//    �Ѱ��� ���弼��

	// 2. ����� ������ ? ������ ������ ?
	// ����� ���ٴ� ����   : private �����ϱ� ���ϴ�
	// ������ ���ٴ� ���� : ����� ����� �������� �ִ�.

	int n = 0;
	Point p5 = p1 + p2; // p1.operator+(Point)
	Point p6 = p1 + n;  // p1.operator+(int)
	Point p7 = n  + p2; // n.operator+(Point) �ε�
						// n �� primitive �̴�.
						// => ����� ����� ����.
						// operator+(int, Point)�δ°���
//	++p1;

	// ������ �����Ǹ� �����ϴ� ��� ����� ������ �����մϴ�.
	// ��ӵ� �Լ� ȣ��
	// C++: operator+ 
	// C# : operator+
	// Python : __add__
}



