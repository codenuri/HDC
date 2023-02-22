#include <iostream>

class Base
{
public:
	Base()  {  }

	// �ٽ� : ��� ��� Ŭ������ �Ҹ��ڴ� �ݵ��(�ǵ���) �����Լ��� 
	//        �ؾ� �Ѵ�.
	//       ��� ������� �����Լ��� �ƴѵ� �ذ� ����� ����
	virtual ~Base() {  }
};


class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d; // ok. ������/�Ҹ��� ȣ�� �ߵ�

//	Derived* p = new Derived; // �̼��� ������ ȣ��
//	delete p;				  // �̼��� �Ҹ��� ȣ��

	Base* p = new Derived; // �̼��� ������ ȣ��
	delete p;		// �̼��� �Ҹ��� ȣ��
					// ��, "�Ҹ���"��� �Լ� ȣ��
					// static ���ε� �Ǵ� dynamic ���ε��ؾ� �Ѵ�

}



// 143