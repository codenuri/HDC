#include <iostream>

class Bike
{
	int gear = 0;
public:
	// friend �Լ�
	// => ��� �Լ��� �ƴ����� private �� ���� ����

	// QA1. ��� �Լ��� �ϸ� ���� �ʳ��� ?
	// => ��� �Լ��� �Ҽ� ���� ��찡 �ִ� - ������ �����ǿ���

	//QA2. get_gear()/ set_gear() ���� ����� ���� �ʳ���
	// 
	// => 2�� �Լ��� ����� ���� ��ο��� ������ ����ϴ°�!
	// => friend �� �Ѱ��� �Լ����� ���� ���
	friend void fixBike();
};


void fixBike()
{
	Bike b;
	b.gear = 10; // friend �Լ� �̹Ƿ� ���� �ƴ�.!!
}


int main()
{
	fixBike();
}