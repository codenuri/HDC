#include <iostream>

class Car
{
public:
	// 다음중 에러는 ?
	void foo()
	{
		std::cout << this << std::endl; // 1
	}
	// 핵심 : static 멤버 함수는 객체 없이 호출 가능하다.
	//       객체 없이 호출되므로 this 를 사용할수 없다.
	static void goo() 
	{
		std::cout << this << std::endl; // error.
	}
};

int main()
{
	Car::goo();
}
