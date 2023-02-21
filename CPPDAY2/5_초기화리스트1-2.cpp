#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& s, int a)
	{
		// �Ʒ� �ڵ��
		// 1. std::string Ÿ���� name�� ����Ʈ ������ȣ����
		// 2. ���Կ�����(name.operator=(s)) �� ȣ���ϴ� �ڵ�
		name = s; // string Ÿ���� ������ ? ���Կ�����
		age = a;
	}
};

class Person2
{
	std::string name;
	int age;
public:
	// �ʱ�ȭ ����Ʈ�� ����ϸ�
	// => "std::string name(s)" �� �ʱ�ȭ �ش޶�� �ǹ�
	// => ��, ������ �ƴ� ��¥ �ʱ�ȭ!
	// => C++11 ���ʹ� () ��� {} ��밡��
//	Person2(const std::string& s, int a) : name(s), age(a)
	Person2(const std::string& s, int a) : name{ s }, age{ a }
	{
	}
};


int main()
{
	Person1 p1("kim", 28);
	Person2 p2("kim", 28);
}

