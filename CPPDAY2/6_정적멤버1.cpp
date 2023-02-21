﻿// 3_정적멤버1 - 110 page
#include <iostream>

// 방법 1. 멤버 데이타 cnt 사용

// => 멤버 데이타는 객체당 한개씩 메모리에 놓이게 된다.
// => 객체의 갯수 파악 실패

class Car
{
	int color;
	int speed;
public:
	int cnt = 0;

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	// 자동차 객체를 몇개 만들었는지 갯수를 파악하고 싶다!

	std::cout << c1.cnt << std::endl; // 1
}

