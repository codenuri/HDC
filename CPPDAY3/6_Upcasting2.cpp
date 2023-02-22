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
	// 사용자에게 정수를 입력 받아서 
	// 1이면 Dog 객체를 만들고 아니면 Cat 객체를 만들어 보세요
	// 단, 객체는 계속 사용해야 하므로 파괴되면 안됩니다.

	int n = 0;

	std::cin >> n;

//	Dog* p = nullptr; // 이렇게 하면 Dog 객체 주소만 담을수 있습니다

	Animal* p = nullptr; // 이렇게 하면 모든 동물객체의 주소를
						 // 담을수 있습니다.

	if (n == 1)
	{
//		Dog d; // 이렇게 만들면 {} 벗어날때 파괴 됩니다.
		p = new Dog;
	}
	else 
	{ 
		p = new Cat;
	}

	// 문제점 : 여기서 p를 사용하면 Animal 멤버만 접근가능합니다.
	// => Dog 가 추가한 고유 멤버는 어떻게 접근하나요 ?
	// => 내일의 주제!

	// 사용후에는 꼭 제거
	delete p;
}
