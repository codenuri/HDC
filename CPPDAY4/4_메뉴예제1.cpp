#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// ��ü���� ���α׷� 
// => �ʿ��� Ÿ���� ���� ������!

class MenuItem
{
	std::string title;
	int id;
public:

	MenuItem(const std::string& s, int n)
		: title(s), id(n) {}

	std::string get_title() const { return title; }

	// �޴� ���ý� ȣ��� �Լ�
	void command()
	{
		std::cout << get_title() << " �޴� ����" << std::endl;

		_getch();
	}
};

int main()
{
	MenuItem m1("���", 1);
	MenuItem m2("���", 2);

	m1.command(); 
}


