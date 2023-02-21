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

	void resize(int newsize)
	{
		if (newsize > sz) // Ŀ���� ���
		{
			// 1. ���ο� �޸� �Ҵ�
			int* tmp = new int[newsize];

			// 2. ���� ������ ����Ÿ ����
			for (int i = 0; i < sz; i++)
			{
				tmp[i] = ptr[i];
			}

			// 3. ���� ���� ����
			delete[] ptr;

			// 4. ��� ����Ÿ ptr�� ���ο� ���� ���
			ptr = tmp;

			// 5. ũ�� ���� ����
			sz = newsize;
		}
	}
	int size() { return sz; }
};

int main()
{
	vector v(4);

	v.set_at(2, 3); 

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl; // 3

}