// 5_»ı¼ºÀÚ3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	Point p1;		
	Point p2(1, 2); 

	Point p3{ 1,2 };   
	Point p4 = { 1,2 };

	Point arr1[5];
	Point arr2[5] = { {1,2},{2,3} };


	Point* p; 

	p = (Point*)malloc( sizeof(Point) ); 
	free(p);							

	p = new Point; 
	delete p;

	p = new Point(1, 1); 
	delete p;
}