#include <iostream>

// 1. return 문장이 한개라면 후위 반환 자체를 생략 가능합니다.
//    => "리턴 타입 자리에 auto" 만 적어도 됩니다.
template<typename T1, typename T2>
auto Add(T1 a, T2 b) //-> decltype(a+b)
{					
	// 아래 처럼 return 문이 2개이상이면 "auto"만 표기하면
	// 에러.
	if (a == 0) return b;

	return a + b;
}



int main()
{
	std::cout << Add(1, 2.2) << std::endl;


}

