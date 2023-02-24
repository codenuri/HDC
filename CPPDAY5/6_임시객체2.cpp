#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ٽ� : �ӽð�ü�� Ư¡
int main()
{
	Point pt(1, 2);

	// 1. 

	pt.x = 10;			// ok
	Point(1, 2).x = 10;	// error. �ӽð�ü�� ��ȣ��
						//		���ʿ� �ü� ����.


	Point& r1 = pt;			// ok	
	Point& r2 = Point(1, 2);// error.
							// �ӽð�ü�� ������ ����ų������

	const Point& r3 = Point(1, 2); // ok
							// �ӽð�ü�� const �����δ�							// 
							// ����ų�� �ִ�.
					// ����, �ӽð�ü�� ������ r3�� ��������
					// ����˴ϴ�.
}





