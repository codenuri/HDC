#include <iostream>

// �ٽ� : Ÿ���� ���鶧
//		"����"�� ��Ÿ���� ����Ÿ�� ���¸� ������ ������ �����ϴ�
//	    �Լ��� ��� ������!!

// C ����ü  : �Լ��� �����Ҽ� ����.
// C++����ü : �Լ��� �����Ҽ� �ִ�.
// �� ����ü �ȿ� �Լ��� �ִ°� ?
// 1. �Լ��� ������ ����Ÿ(Rect)�� �����ʿ� ����.
// 2. �پ��� C++ ������ Ȱ���ؼ� ������ Ÿ���� ����� �ִ�

struct Rect
{
	// ��� ����Ÿ
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ��ȿ����� ��� ����Ÿ�� �ٷ� ���� ����.
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};



int main()
{
	Rect rc = { 1, 1, 10, 10 };

//	int n1 = getRectArea(rc);	// C ��Ÿ��
//	drawRect(rc);				// �Լ��� ����Ÿ ����

	int n1 = rc.getArea();	// C++ ��Ÿ��
	rc.draw();				// ��ü���� ��Ÿ��
								// "rc!! �׷���!"
}