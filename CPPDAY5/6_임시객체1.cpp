#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	{ std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
int main()
{
//	Point pt(1, 2); // �̸��ִ� ��ü(named object)
					// ���� : �ڽ��� ������ ���� ����� �ı�

	Point (1, 2);	// �̸� ���� ��ü(unnamed object)
					// ���� : �ڽ��� ������ ������ ��
					// "�ӽð�ü", "temporary" ����մϴ�.


	std::cout << "-------" << std::endl;
}





