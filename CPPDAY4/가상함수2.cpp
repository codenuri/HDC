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
	
	std::cout << sizeof(b) << std::endl; // �����Լ� ���ٸ� 4
							// 4 + �����Լ����̺�������ũ��(8)
	std::cout << sizeof(d) << std::endl;
}