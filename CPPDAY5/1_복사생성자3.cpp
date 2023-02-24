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
	// 사용자가 만드는 복사 생성자
	// => 포인터가 아닌 메모리 자체를 복사
	// => 이런 기술을 "깊은 복사(Deep Copy)" 라고 합니다.
	vector(const vector& v)
	{
		// 1. 포인터가 아닌 멤버는 그냥 복사
		sz = v.sz;

		// 2. 포인터 멤버는 주소를 복사 하지 말고
		//    메모리 할당후 메모리 자체를 복사
		ptr = new int[sz];

		// memcpy : 메모리를 복사 하는 C 표준 함수
		memcpy(ptr, v.ptr, sizeof(int) * sz);

		std::cout << "사용자가 만든 복사 생성자" << std::endl;
	}
};

int main()
{
	vector v1(4);
	vector v2 = v1; 

}