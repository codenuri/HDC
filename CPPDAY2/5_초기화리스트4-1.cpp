#include <iostream>

int g = 10;

class Test
{
public:
	// ��� ����Ÿ�� ���� �ʱⰪ�� �ִ� ���
	int value = ++g; // ���� �̷� �ڵ�� ������� ������
					 // ȥ�������� ���ϴ�.				 
					 // = 0 ���� �ڵ常 ����ϼ���					 

	Test() {}		// : value(++g)
	Test(int n) : value(n) {}
};
int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 10, 11, 12
}