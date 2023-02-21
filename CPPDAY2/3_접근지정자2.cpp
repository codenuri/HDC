// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 접근지정자를 생략하면
// struct : public 
// class  : private

// C++ 에서 class 와 struct 차이는 오직 한개 입니다.
// => 접근 지정자 생략시 디폴트 가 어떤 것인가 ??


// C#, java, swift 에서는 class와 struct는 
// => 아주 큰 차이가 있습니다.


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
