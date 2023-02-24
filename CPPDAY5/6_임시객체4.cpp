#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

/*
void f1(Point  pt) {} // call by value : ���纻 ����
void f2(Point& pt) {} // call by reference : ���纻�����ȵ�

int main()
{
	Point p(0, 0);
	f1(p);
	f2(p);
}
*/




Point pt(1, 2);

Point foo() // return by value
{			// pt�� ���纻�� ���� ��ȯ
			// "���Ͽ� �ӽð�ü"
	return pt; 
}

Point& goo()  // return by reference
{			
	return pt;
}

int main()
{
	foo().x = 10; // error. ���Ͽ��ӽð�ü.x = 10
	goo().x = 10; // ok.  pt.x = 10
}

// ���� ���� : ���������� ���� reference ��ȯ �ϸ� �ȵ˴ϴ�.
Point& hoo()
{
	Point p(1, 2);
	return p; // �ı��Ǵ� ��ü�� ���� ��ȯ!!.. ����
}





