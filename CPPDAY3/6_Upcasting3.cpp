// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};


int main()
{
	// 프로그램에서 생성한 모든 동물 객체를 보관하고 싶다
	std::vector<Dog*> v1; // Dog 타입의 객체만 보관

	std::vector<Animal*> v1; // 모든 동물을 보관
					// 동종을 보관하는 컨테이너
					// 동일 기반 클래스로 부터 파생된객체보관
}

// 모든 동물 객체는 새해가 되면 아래 함수로 전달됩니다.
//void happy_new_year(Dog* p)  // Dog 만 받을수 있다
void happy_new_year(Animal* p) // 모든 동물을 받을수 있다
{
	++(p->age);
}