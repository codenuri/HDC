#include <iostream>
// 필요한 타입을 먼저 만들어라!!
// => 동적 할당되는 메모리는 관리하는 타입이 필요 하다.

// 크기 조절이 가능한 동적 할당된 메모리를 관리하는
// vector 라는 타입을 설계해 봅시다.

// 함수뿐 아니라 클래스도 틀(template) 으로 만들수 있습니다.

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
		//=> 클래스 템플릿 사용시는 반드시 타입을 전달
		//   해야 합니다.

	vector<double> v2(4);
	v2.resize(12);

	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl; // 3

}