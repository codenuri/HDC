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

	void set_at(int idx, int value)
	{
		// 0 <= idx < sz �� Ȯ���ϴ� ���� �����ϴ�.
		ptr[idx] = value;
	}

	int get_at(int idx)
	{
		return ptr[idx];
	}
};

int main()
{
	vector v(10); 
	
	v.set_at(2, 3); // v[2] = 3 �� �ǵ�!

	int n = v.get_at(2); 

	std::cout << n << std::endl; // 3

}