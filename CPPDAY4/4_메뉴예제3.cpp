#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// MenuItem �� PopupMenu �� ������ ��� Ŭ������ ���� �մϴ�.

class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& s) : title(s) {}

	std::string get_title() const { return title; }


	virtual void command() = 0;
};



class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& s, int n)
		: BaseMenu(s), id(n) {}

	void command()
	{
		std::cout << get_title() << " �޴� ����" << std::endl;

		_getch();
	}
};
class PopupMenu : public BaseMenu
{
	//std::string title;
	std::vector<BaseMenu*> v;
public:

	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void append(BaseMenu* p) { v.push_back(p); }

	// �ٽ��� �Ʒ� �Լ�
	void command()
	{
		while (1)
		{
			system("cls"); 

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

			if (cmd == sz + 1)
				break;

			if (cmd < 1 || cmd > sz + 1)
				continue;


			v[cmd - 1]->command();

		}




	}
};


int main()
{
	MenuItem m1("�Ұ�� ���", 1);
	MenuItem m2("��ġ ���",   2);

	MenuItem m3("���", 3);

	PopupMenu kimbam("�������");
	kimbam.append(&m1);
	kimbam.append(&m2);
	//------------------------------

	PopupMenu pm("������ �Ĵ�");

	pm.append(&kimbam); // ???
						// popup �� menuitem �Ӿƴ϶�
						// popup �� �����Ҽ� �־�� �Ѵ�.
	pm.append(&m3);

	pm.command(); 
}


