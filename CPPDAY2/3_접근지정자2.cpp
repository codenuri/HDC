// 4_����������1 - 74page
#include <iostream>
#include <string>

// ���������ڸ� �����ϸ�
// struct : public 
// class  : private

// C++ ���� class �� struct ���̴� ���� �Ѱ� �Դϴ�.
// => ���� ������ ������ ����Ʈ �� � ���ΰ� ??


// C#, java, swift ������ class�� struct�� 
// => ���� ū ���̰� �ֽ��ϴ�.


//struct Person
class Person
{
//private:	
	std::string name;
	int  age;

public:		
	void set_age(int a)
	{
		if (a >= 1 && a <= 150)
			age = a;
	}
};

int main()
{
	Person p;

	p.set_age(-10); 

}
