#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& n, int a) : name(n), age(a) {}
};

// People ���� �Ļ��� Student ���弼��
// => �й�(int id) �߰��ϼ���
// => main ���� Student ��ü ������ ������!

class Student : public People
{
	int id;
public:
	// 1. ����ڰ� ������ ������ ������ �����Ϸ��� �Ʒ��ڵ� ����
//	Student() : People() {}

	// 2. ��� Ŭ������ ����Ʈ �����ڰ� ������
	//    ����ڰ� �����ڸ� ���� ��� Ŭ������ �ٸ� ������ ȣ��
	Student( const std::string& n, int a, int d)
		: People(n, a), id(d) {}
};

int main()
{
	Student s("kim", 20, 15);
}



