#include <iostream>
// �ʿ��� Ÿ���� ���� ������!!
// => ���� �Ҵ�Ǵ� �޸𸮴� �����ϴ� Ÿ���� �ʿ� �ϴ�.

// ũ�� ������ ������ ���� �Ҵ�� �޸𸮸� �����ϴ�
// vector ��� Ÿ���� ������ ���ô�.

class vector
{
private:
	int* ptr;
	int  sz;

public:
	vector(int size)
	{
		sz = size;
		ptr = new int[size];
	}
	~vector()
	{
		delete[] ptr;
	}
};

int main()
{
	vector v(10); // 10�� �Ҵ�

//	v.resize(20); // 20���� �÷��޶�.
}