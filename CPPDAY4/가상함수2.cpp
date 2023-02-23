#include <iostream>

class Base
{
	int x;
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
class Derived : public Base
{
	int y;
public:
	void f2() override {}
};
int main()
{
	Base b;
	Derived d;
	
	std::cout << sizeof(b) << std::endl; // 가상함수 없다면 4
							// 4 + 가상함수테이블포인터크기(8)
	std::cout << sizeof(d) << std::endl;
}