// 1_레퍼런스2
#include <iostream>


// reference 는 포인터와 유사 합니다.
// => 함수 인자로 전달시 모두 원본 수정 가능합니다.
// => 그런데, 레퍼런스가 좀더 편하고 안전합니다.
// => 레퍼런스 없어도 포인터로 유사하게 구현 가능합니다.
//    레퍼런스는 편리한 포인터 입니다.

// 43 page - 그림이 중요 합니다. 꼭 완벽히 이해해 놓으세요

void inc1(int n)  { ++n;  }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1(a); // call by value, 복사본 생성되어서 받게됨
			 // a증가 실패

	inc2( &b ); // call by pointer(address)
				// b증가 성공
	
	inc3( c );	// call by reference
				// C 증가 성공.



	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}
