
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

void draw_line(const Point& p1, const Point& p2) 
{
}

void init_point(Point& p)
{
	p.x = 0;
	p.y = 0;
}

int main()
{
	// �Ʒ� ó�� ����ϸ� draw_line() ȣ����
	// p1, p2 �� ���̻� �ʿ� ��� ��� �ı����� �ʽ��ϴ�.
	// {} ����� �ı� �˴ϴ�.
//	Point p1(1, 1);
//	Point p2(10, 10);
//	draw_line(p1, p2);
	
	draw_line( Point(1, 1), Point(10, 10) ); 

	Point p1;

	// �Ʒ� 2���� ������ ������
	init_point(p1);			// ok
	init_point(Point(0,0)); // 

	std::cout << "-----" << std::endl;
}





