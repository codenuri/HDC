#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// MenuItem 과 PopupMenu 의 공통의 기반 클래스를 설계 합니다.

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
		std::cout << get_title() << " 메뉴 선택" << std::endl;

		_getch();
	}
};
class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:

	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void append(BaseMenu* p) { v.push_back(p); }

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

			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";

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
	PopupMenu* root = new PopupMenu("ROOT");
	PopupMenu* pm1  = new PopupMenu("색상 변경");
	PopupMenu* pm2  = new PopupMenu("해상도 변경");

	root->append(pm1);
	root->append(pm2);

	pm1->append(new MenuItem("RED",  11));
	pm1->append(new MenuItem("GREEN",12));
	pm1->append(new MenuItem("BLUE", 13));

	pm2->append(new MenuItem("HD",  21));
	pm2->append(new MenuItem("FHD", 22));
	pm2->append(new MenuItem("UHD", 23));

	// 메뉴를 시작해 보세요.

}


