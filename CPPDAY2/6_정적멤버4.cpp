#include <iostream>

class Car
{
	int color;
	int speed;

	static int cnt; // private �̹Ƿ�
					// Car �� ��밡���� ���������� ����!
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; // private �̶�, �ܺ� �ʱ�ȭ�� �����մϴ�.

int main()
{
//	std::cout << Car::cnt << std::endl; // 0

	Car c1;
	Car c2;

//	std::cout << Car::cnt << std::endl; // 2
//	std::cout << c1.cnt << std::endl; // 2
//	std::cout << c2.cnt << std::endl; // 2

}

