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
	// ���α׷����� ������ ��� ���� ��ü�� �����ϰ� �ʹ�
	std::vector<Dog*> v1; // Dog Ÿ���� ��ü�� ����

	std::vector<Animal*> v1; // ��� ������ ����
					// ������ �����ϴ� �����̳�
					// ���� ��� Ŭ������ ���� �Ļ��Ȱ�ü����
}

// ��� ���� ��ü�� ���ذ� �Ǹ� �Ʒ� �Լ��� ���޵˴ϴ�.
//void happy_new_year(Dog* p)  // Dog �� ������ �ִ�
void happy_new_year(Animal* p) // ��� ������ ������ �ִ�
{
	++(p->age);
}