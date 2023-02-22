#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& n, int a) : name(n), age(a) {}
};
int main()
{
//	People p;	// 이 코드를 허용하면
				// 이름과 나이가 정확히 초기화 되지 않은 객체를
				// 허용하겠다는 의미 입니다.
	People p("kim", 20); // 안전하게 하려면 
						 // 위코드를 허용하지 말고
						 // 이렇게만 하도록하는 것이 좋습니다.
}



