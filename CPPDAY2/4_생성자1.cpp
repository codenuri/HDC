// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
private:
	std::string name;
	int  age;

public:
	void init(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
	// ������
	// => Ŭ���� �̸��� ������ �̸��� �Լ�
	// => ��ȯ Ÿ���� ǥ������ �ʴ´�.
	// => ��ü�� �����ϸ� �ڵ����� ȣ��ȴ�.
	Person(const std::string& s, int a)
	{
		name = s;
		age = a;
	}

};

int main()
{
	// 1. ��� ��� ����Ÿ�� public �� �ִٸ�
	//    �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
	// 2. ������, ��� ����Ÿ�� private �� �ִٸ� �Ʒ� �ڵ忡��
	// Person p = { "kim", 28 };

	// Person p;
	// p.init("kim", 28);

	Person p("kim", 28); // �̼��� �����ڰ� ȣ��Ǿ
						// ������ ���ڷ� �ʱ�ȭ �˴ϴ�.

}



