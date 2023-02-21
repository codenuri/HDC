// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
//public:
private:
	std::string name;
	int  age;

public:
	void init(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
	// 생성자
	// => 클래스 이름과 동일한 이름의 함수
	// => 반환 타입을 표기하지 않는다.
	// => 객체를 생성하면 자동으로 호출된다.
	Person(const std::string& s, int a)
	{
		name = s;
		age = a;
	}

};

int main()
{
	// 1. 모든 멤버 데이타가 public 에 있다면
	//    아래 처럼 초기화 가능합니다.
	// 2. 하지만, 멤버 데이타가 private 에 있다면 아래 코드에러
	// Person p = { "kim", 28 };

	// Person p;
	// p.init("kim", 28);

	Person p("kim", 28); // 이순간 생성자가 호출되어서
						// 전달한 인자로 초기화 됩니다.

}



