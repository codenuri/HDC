// QA
#include <iostream>

class Shape
{
public:
	// virtual �� �Լ� ����ο��� �ٿ��� �մϴ�.
	// �����ο��� ���̸� �����Դϴ�.
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


