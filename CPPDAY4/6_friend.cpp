#include <iostream>

class Bike
{
	int gear = 0;
public:
	// friend 함수
	// => 멤버 함수는 아니지만 private 에 접근 가능

	// QA1. 멤버 함수로 하면 되지 않나요 ?
	// => 멤버 함수로 할수 없는 경우가 있다 - 연산자 재정의에서

	//QA2. get_gear()/ set_gear() 등을 만들면 되지 않나요
	// 
	// => 2개 함수는 만드는 것은 모두에게 접근을 허용하는것!
	// => friend 는 한개의 함수에만 접근 허용
	friend void fixBike();
};


void fixBike()
{
	Bike b;
	b.gear = 10; // friend 함수 이므로 에러 아님.!!
}


int main()
{
	fixBike();
}