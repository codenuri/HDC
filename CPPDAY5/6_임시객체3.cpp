
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
	// 아래 처럼 사용하면 draw_line() 호출후
	// p1, p2 가 더이상 필요 없어도 즉시 파괴되지 않습니다.
	// {} 벗어나야 파괴 됩니다.
//	Point p1(1, 1);
//	Point p2(10, 10);
//	draw_line(p1, p2);
	
	draw_line( Point(1, 1), Point(10, 10) ); 

	Point p1;

	// 아래 2줄을 생각해 보세요
	init_point(p1);			// ok
	init_point(Point(0,0)); // 

	std::cout << "-----" << std::endl;
}





