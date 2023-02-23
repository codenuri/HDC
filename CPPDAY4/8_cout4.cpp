#include <iostream>

int main()
{
	std::cout << "A" << std::endl;

	// cout도 객체이므로 멤버 함수가 있습니다.
	// => 자주 사용하지는 않습니다.
	// => 단, cin 의 멤버함수는 가끔 사용합니다.
	std::cout.flush(); // fflush(stdout)
	
}