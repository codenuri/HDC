// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>
#include <iomanip> // 입출력 조정을 위한 함수를 사용하기위해
					// "입출력 조정자 함수" 라고 합니다.
int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10  10진수, 

	// "%x"
	std::cout << std::hex << n << std::endl; // a

	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 

	// cout 출력시 위처럼 다양하게 포맷지정 가능합니다.
	// std::cout << 입출력 조정자함수 << 출력내용


	double d = 3.141592;

	std::cout << d << std::endl; // 결과 확인하세요

	std::cout << std::setprecision(4) << d << std::endl;
}

// cppreference.com 접속후 우측 상단에서 "std::setw" 검색
// 하세요