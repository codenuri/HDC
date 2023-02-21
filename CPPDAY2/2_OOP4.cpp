#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};
int main()
{
	// �ٽ� 1. �޸� layout
	// 1. Rect ������ 2�� �����ϸ�
	// => ��� ����Ÿ�� ���� stack �޸𸮿� ���̰� �˴ϴ�.
	// => ��� �Լ��� �ڵ� �޸𸮿� �Ѱ��� �����մϴ�
	//    Rect �������� 10�� �� ��� �Լ��� �Ѱ� �Դϴ�.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	std::cout << sizeof(r1) << std::endl; // 16

	// 2. ��� ����
	int n = 10;
	n = 20;		// n �� "��" �ϴ� "��" �Դϴ�.
				// "����(variable)" �̶�� �մϴ�.

	Rect r = { 1,1,10,10 };
				// r�� "����" ��� ���� �ʰ�
				// "��ü(object)" ��� �մϴ�.

	// ��ü(object) : ���� �����ϴ� ��� ��!
	//				��, �簢��, ���, ������, �ڵ���.. 

	// primitive type �� �޸𸮿� ����� : ����
	// user define type �� �޸𸮿� ����� : ��ü

	// Rect r ���� "Rect" �� Ÿ��, "r"�� ��ü
}
