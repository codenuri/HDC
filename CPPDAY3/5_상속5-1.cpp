#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& n, int a) : name(n), age(a) {}
};

// People 에서 파생된 Student 만드세요
// => 학번(int id) 추가하세요
// => main 에서 Student 객체 생성해 보세요!

class Student : public People
{
	int id;
public:
	// 1. 사용자가 생성자 만들지 않으면 컴파일러가 아래코드 제공
//	Student() : People() {}

	// 2. 기반 클래스에 디폴트 생성자가 없으면
	//    사용자가 생성자를 만들어서 기반 클래스의 다른 생성자 호출
	Student( const std::string& n, int a, int d)
		: People(n, a), id(d) {}
};

int main()
{
	Student s("kim", 20, 15);
}



