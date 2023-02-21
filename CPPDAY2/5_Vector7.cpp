#include <iostream>
// �ʿ��� Ÿ���� ���� ������!!
// => ���� �Ҵ�Ǵ� �޸𸮴� �����ϴ� Ÿ���� �ʿ� �ϴ�.

// ũ�� ������ ������ ���� �Ҵ�� �޸𸮸� �����ϴ�
// vector ��� Ÿ���� ������ ���ô�.

// �Լ��� �ƴ϶� Ŭ������ Ʋ(template) ���� ����� �ֽ��ϴ�.

template<typename T>
class vector
{
private:
	T* ptr;
	int  sz;

public:
	vector(int size)
	{
		sz = size;
		ptr = new T[size];
	}
	~vector()
	{
		delete[] ptr;
	}

	void set_at(int idx, T value)
	{
		ptr[idx] = value;
	}

	T get_at(int idx)
	{
		return ptr[idx];
	}

	void resize(int newsize)
	{
		if (newsize > sz) 
		{
			T* tmp = new T[newsize];

			for (int i = 0; i < sz; i++)
			{
				tmp[i] = ptr[i];
			}

			delete[] ptr;

			ptr = tmp;

			sz = newsize;
		}
	}
	int size() { return sz; }
};

int main()
{
//	vector v(4); // error

	vector<int> v(4);
		//=> Ŭ���� ���ø� ���ô� �ݵ�� Ÿ���� ����
		//   �ؾ� �մϴ�.

	vector<double> v2(4);
	v2.resize(12);

	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl; // 3

}