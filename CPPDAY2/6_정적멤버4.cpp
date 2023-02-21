#include <iostream>

class Car
{
	int color;
	int speed;

	static int cnt; // private 이므로
					// Car 만 사용가능한 전역변수로 생각!
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0; // private 이라도, 외부 초기화는 가능합니다.

int main()
{
//	std::cout << Car::cnt << std::endl; // 0

	Car c1;
	Car c2;

//	std::cout << Car::cnt << std::endl; // 2
//	std::cout << c1.cnt << std::endl; // 2
//	std::cout << c2.cnt << std::endl; // 2

}

