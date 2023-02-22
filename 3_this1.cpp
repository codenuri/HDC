// 5_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	// 126 page 에서 "const this 모양에서 const 제거해 주세요"
	void set(int a, int b) // void set(Point* this, int a, int b)
	{
		x = a;				// this->x = a;
		y = b;				// this->y = b;
							// 컴파일러가 위 코드 처럼 변경하는것

		// 멤버 함수안에서 this 사용할수 있습니다.
		// 의미 : 현재 함수를 호출할때 사용한 객체 주소
		std::cout << "set : " << this << std::endl;
	}
};

int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;

	p1.set(10, 20); // 컴파일러가 아래 처럼 변경합니다.
					// set(&p1, 10, 20)

	p2.set(10, 20); // set(&p2, 10, 20)
}


// 대부분의 객체지향 언어는 원리가 동일합니다.
// => 멤버함수 호출시, 객체주소가 인자로 추가되는것
p.set(10, 20); // set(&p, 10, 20) 

// set 만들때
// C++, java, C# : 컴파일러가 this 추가
//				   개발자는 this 를 받을필요 없다.
//				   컴파일러가 자동추가
void set(int a, int b) => void set(this, a, b)

// 파이썬 : 개발자가 명시적으로 받아야 한다.
//         this 라고 하지 않고 self 라고 부릅니다.
class Point
	def set(self, a, b) :
		self.x = a
		self.y = b 

