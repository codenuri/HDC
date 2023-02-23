#include <iostream>

int main()
{
	// cin 도 입력 버퍼에서 꺼내 오게 됩니다.
	int n = 0;

	std::cin >> n; // 이순간 'a' 를 입력했을때 

	std::cout << n << std::endl; 
				// 1. 0,   2. 97,   3. 10,   4. -1
				// => 0.. 입력 실패!
	if (std::cin.fail())
		std::cout << "입력 실패" << std::endl;
}