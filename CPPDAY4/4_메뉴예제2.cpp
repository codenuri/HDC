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
		std::cout << get_title() << " 메뉴 선택" << std::endl;

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

	// 핵심은 아래 함수
	void command()
	{
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

		// 선택된 메뉴 실행
		v[cmd - 1]->command();
	}
};


int main()
{
	MenuItem m1("김밥", 1);
	MenuItem m2("라면", 2);

	PopupMenu pm("오늘의 식단");

	pm.append(&m1);
	pm.append(&m2);

	pm.command(); // 팝업메뉴 선택시 해야할일을 생각해 보세요
				  // 1. 김밥
				  // 2. 라면 
				  // 3. 종료
				  // 메뉴를 선택하세요 >> 
}


