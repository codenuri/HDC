#include <iostream>

template<typename T1, typename T2>
//decltype(a + b) Add(T1 a, T2 b) // error. a, b를 선언전에 사용
auto Add(T1 a, T2 b) -> decltype(a + b) // ok..
{								// 이런 문제를 해결하기 위해
								// 후위 반환 타입 문법 탄생
	return a + b;		
}

int main()
{
	std::cout << Add(1, 2.2) << std::endl;

//	a = 10; // ? error. 변수는 선언후에 사용가능
//	int a = 0;
//	a = 10; // ??ok.. 

}

