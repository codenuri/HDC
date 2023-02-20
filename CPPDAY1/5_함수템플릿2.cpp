#include <iostream>
// ? 를 채우기가 어려웠습니다.
// 그래서 "decltype" 을 만들었습니다.
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 정확한 표기법
	std::cout << Add<int, double>(1, 2.2) << std::endl;

	std::cout << Add(1, 2.2) << std::endl;

}

