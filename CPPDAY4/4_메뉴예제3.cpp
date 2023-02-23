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
	//std::string title;
	std::vector<BaseMenu*> v;
public:

	PopupMenu(const std::string& s) : BaseMenu(s) {}

	void append(BaseMenu* p) { v.push_back(p); }

	// 핵심은 아래 함수
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
	MenuItem m1("소고기 김밥", 1);
	MenuItem m2("참치 김밥",   2);

	MenuItem m3("라면", 3);

	PopupMenu kimbam("김밥종류");
	kimbam.append(&m1);
	kimbam.append(&m2);
	//------------------------------

	PopupMenu pm("오늘의 식단");

	pm.append(&kimbam); // ???
						// popup 은 menuitem 뿐아니라
						// popup 도 보관할수 있어야 한다.
	pm.append(&m3);

	pm.command(); 
}


