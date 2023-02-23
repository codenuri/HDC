#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:

	MenuItem(const std::string& s, int n)
		: title(s), id(n) {}

	std::string get_title() const { return title; }

	void command()
	{
		std::cout << get_title() << " �޴� ����" << std::endl;

		_getch();
	}
};
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:

	PopupMenu(const std::string& s) : title(s) {}

	void append(MenuItem* p) { v.push_back(p); }

	// �ٽ��� �Ʒ� �Լ�
	void command()
	{
		while (1)
		{
			system("cls"); // ȭ�� �����

			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title()
					<< std::endl;
			}

			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴��� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // ���� �޴� ����
				break;

			if (cmd < 1 || cmd > sz + 1) // �߸� �Է�
				continue ;


			// ���õ� �޴� ����
			v[cmd - 1]->command();

		}




	}
};


int main()
{
	MenuItem m1("���", 1);
	MenuItem m2("���", 2);

	PopupMenu pm("������ �Ĵ�");

	pm.append(&m1);
	pm.append(&m2);

	pm.command(); // �˾��޴� ���ý� �ؾ������� ������ ������
				  // 1. ���
				  // 2. ��� 
				  // 3. ����
				  // �޴��� �����ϼ��� >> 
}


