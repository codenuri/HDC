#include <iostream>

// ���� �����ڰ� �� �߿��Ѱ��� ?
// �׳� �����Ϸ��� ����� �ִ°� ����ϸ� �Ǵ°� �ƴѰ��� ??
// => ��κ��� �׷����ϴ�.

// �׷���, �����Ϸ��� �����  ������ �����Ҷ� �ֽ��ϴ�.
// => �Ʒ� ����

// ���� ����(Shallow Copy)
// Ŭ������ ���������� ������ ����� �ְ� ���� �޸� �Ҵ�������
// �޸� ��ü�� �������� �ʰ�, �ּҸ� �����ϴ� ����

// ����ڰ� ���� �����ڸ� ���� �ذ��ؾ� �Ѵ�.

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
	vector v1(4);
	vector v2 = v1; // vector v2(v1)
					// 


}