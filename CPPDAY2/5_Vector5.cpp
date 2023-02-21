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

	void resize(int newsize)
	{
		if (newsize > sz) // 커지는 경우
		{
			// 1. 새로운 메모리 할당
			int* tmp = new int[newsize];

			// 2. 기존 버퍼의 데이타 복사
			for (int i = 0; i < sz; i++)
			{
				tmp[i] = ptr[i];
			}

			// 3. 기존 버퍼 제거
			delete[] ptr;

			// 4. 멤버 데이타 ptr이 새로운 버퍼 사용
			ptr = tmp;

			// 5. 크기 변수 변경
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