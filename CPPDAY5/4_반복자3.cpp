#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin(); 
	auto p2 = s.end();   // 마지막 요소가 아닌 
						// 마지막 다음을 의미 합니다.

	*p1 = 10; 
//	*p2 = 10;  // runtime error.
			   // end 로 얻은 반복자는 * 연산하지 마세요

	// s.end()로 얻는 반복자는 == 와 != 만 사용해야 합니다.
	while ( p1 != p2 )
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}