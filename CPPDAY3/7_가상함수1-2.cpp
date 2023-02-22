#include <iostream>

class Animal
{
public:
	// �Ϲ� ��� �Լ� : static binding �϶�� �ǹ�
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 
	

	// �����Լ�(virtual function) : dynamic binding �϶�� �ǹ�
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  // 2

	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }  // 2
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;
	p->Cry1(); // Animal Cry1,  �����Ͻ� ������ Ÿ������ ȣ�� ���� 
	p->Cry2(); // Dog    Cry2,  ����� �޸𸮸� �����ؼ� ȣ�� ����
}

// godbolt.org
