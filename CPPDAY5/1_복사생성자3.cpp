#include <iostream>

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
	// ����ڰ� ����� ���� ������
	// => �����Ͱ� �ƴ� �޸� ��ü�� ����
	// => �̷� ����� "���� ����(Deep Copy)" ��� �մϴ�.
	vector(const vector& v)
	{
		// 1. �����Ͱ� �ƴ� ����� �׳� ����
		sz = v.sz;

		// 2. ������ ����� �ּҸ� ���� ���� ����
		//    �޸� �Ҵ��� �޸� ��ü�� ����
		ptr = new int[sz];

		// memcpy : �޸𸮸� ���� �ϴ� C ǥ�� �Լ�
		memcpy(ptr, v.ptr, sizeof(int) * sz);

		std::cout << "����ڰ� ���� ���� ������" << std::endl;
	}
};

int main()
{
	vector v1(4);
	vector v2 = v1; 

}