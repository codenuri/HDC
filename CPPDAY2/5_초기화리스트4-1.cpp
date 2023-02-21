#include <iostream>

int g = 10;

class Test
{
public:
	// 멤버 데이타에 직접 초기값을 넣는 경우
	int value = ++g; // 절대 이런 코드는 사용하지 마세요
					 // 혼란스러워 집니다.				 
					 // = 0 같은 코드만 사용하세요					 

	Test() {}		// : value(++g)
	Test(int n) : value(n) {}
};
int main()
{
	Test t1;
	Test t2(3);

	std::cout << g << std::endl; // 10, 11, 12
}