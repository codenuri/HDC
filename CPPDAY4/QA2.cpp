// QA
#include <iostream>

class Shape
{
public:
	// virtual 은 함수 선언부에만 붙여야 합니다.
	// 구현부에는 붙이면 에러입니다.
	virtual void draw() const;

	virtual ~Shape() {}
};

//virtual void Shape::draw() const
void Shape::draw() const
{
	std::cout << "draw shape" << std::endl;
}



int main()
{

}


