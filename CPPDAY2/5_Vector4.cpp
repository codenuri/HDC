#include <iostream>
// 필요한 타입을 먼저 만들어라!!
// => 동적 할당되는 메모리는 관리하는 타입이 필요 하다.

// 크기 조절이 가능한 동적 할당된 메모리를 관리하는
// vector 라는 타입을 설계해 봅시다.

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
		// 0 <= idx < sz 를 확인하는 것이 좋습니다.
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
	
	v.set_at(2, 3); // v[2] = 3 의 의도!

	int n = v.get_at(2); 

	std::cout << n << std::endl; // 3

}