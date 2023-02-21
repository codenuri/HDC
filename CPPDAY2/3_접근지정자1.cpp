// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 핵심
// 캡슐화 : 멤버데이타를 private 에 놓아서
//         외부에 잘못된 사용으로 부터 객체의 상태가 불안해
//		   지는 것을 막는다.

//		   객체의 상태는 잘정의된 멤버 함수를 통해서만 변경
//		   할수 있다.






// 프로그램에서 사람을 관리해야 한다.
// => "사람" 타입을 먼저 설계해라!

struct Person
{
private:			// private 영역
					// 멤버 함수에서만 접근가능하고
					// 멤버 함수 가 아닌곳에서는 접근 안됨
	std::string name;
	int  age;		

public:				// public 영역
					// 어디서도 접근 가능
	void set_age(int a)
	{
		// 인자의 유효성을 확인해서 인자가 유효한 경우만
		// 객체의 상태를 변경한다.
		if ( a >= 1 && a <= 150 )
			age = a;
	}
};

int main()
{
	Person p;

//	p.age = -10; // Person 타입을 사용하는 사용자의 실수로
				// 현실세계에는 존재할수 없는 잘못된 객체생성 
				// private 멤버 라면 error..

	p.set_age(-10); // 멤버 함수 호출해서 나이 변경
				 
}
