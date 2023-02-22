// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};
int main()
{
	Dog     dog;

	Dog*    p1 = &dog;  // ok
//	int*    p2 = &dog;	// error.

	// 핵심 1. 기반 클래스 포인터에 파생 클래스 타입 객체의
	//		  주소를 담을수 있다.
	// => Dog 객체를 만들면 메모리 윗부분은 결국 Animal 모양이다
	// => 따라서 Animal* 로 가리킬수 있다.
	Animal* p3 = &dog;  // ok. upcasting


	// 핵심 2. Animal* 로는 Animal 멤버만 접근 가능하다.
	// Dog 고유에 멤버는 접근 안됨.
	// 실제 가리키는 객체가 Dog 라도 p3로는 color 접근 안됨
	p3->age = 10;   // ok
//	p3->color = 10; // error

	// 핵심 3. Animal* 인 p3로 Dog 고유 멤버 접근하려면
	// 캐스팅 사용
	// 단, p3가 가리키는 객체가 Dog 라는 확신이 있을때만
	// 사용해야 한다.
	((Dog*)p3)->color = 10;
}




