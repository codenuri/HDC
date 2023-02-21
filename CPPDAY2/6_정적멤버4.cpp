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

//	int get_count() { return cnt; }
		// => �Ϲ� ��� �Լ� 
		// => ��ü�� �־�� ȣ�� ����
		// => "c1.get_count()" ó�� ����ؾ� �Ѵٴ°�

	static int get_count() { return cnt; }
		// => static ��� �Լ�
		// => ��ü ���� ȣ�Ⱑ��
		// => "Car::get_count()" �� ȣ��
		// => "c1.get_count()" �� ȣ�Ⱑ��, ���� ����

};
int Car::cnt = 0; // private �̶�, �ܺ� �ʱ�ȭ�� �����մϴ�.


int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl; // 2

}
// 115 page �Ʒ�
// static ��� ����Ÿ :
// 1. ��ü�� ��� �޸𸮿� ������
// 2. ��� ��ü�� ����
// 
// static ��� �Լ� :
// 1. ��ü ���� ȣ�Ⱑ��.


class Car
{	
	int speed;		// (�ν��Ͻ�, instance) ��� ����Ÿ
	static int cnt; // ����(static) ��� ����Ÿ 
					// �޸� ��ġ : static ��� ����Ÿ
					//				���������� ����
};

// C++       : ��� ����Ÿ, ��� �Լ�
// java(C#��): �ʵ�,       �޼ҵ�