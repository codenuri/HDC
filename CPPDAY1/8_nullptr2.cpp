#include <iostream>

void foo(int* p) { std::cout << "int*" << std::endl;}
void foo(int n)  { std::cout << "int" << std::endl; }

int main()
{
	foo(0); // int. 0은 정수 입니다.
	foo((int*)0); // int*

	foo(nullptr); // C++11 부터는 이코드.. 
				
}
