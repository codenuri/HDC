// 4_����������1 - 74page
#include <iostream>
#include <string>

// C++ ��Ÿ��
class Person
{
private:	
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (a >= 1 && a <= 150)
			age = a;
	}
};

// C#, java ���� ��κ��� ��ü���� ����
// ��� ���� ���������ڸ� �����մϴ�.
// ����)�Ʒ��ڵ�� ���� �ȵ�.
class Person
{
	private std::string name;
	private int  age;

	public void set_age(int a)
	{
		if (a >= 1 && a <= 150)
			age = a;
	}
};