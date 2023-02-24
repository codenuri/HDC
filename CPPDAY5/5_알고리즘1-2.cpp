// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘 
// => "문제를 해결하는 방법" 이라는 일반 적인 용어

// STL 에서 알고리즘
// => std::find 같은 멤버함수가 아닌 일반 함수(템플릿)
// => <algorithm> 헤더

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	auto ret1 = std::find(s.begin(), s.end(), 3);

	// 검색 실패시 : find 2번째로 전달한 반복자가 나옵니다
	if (ret1 == s.end())
	{
		std::cout << "검색 실패" << std::endl;
	}
	else
	{
		std::cout << "성공 : " << *ret1 << std::endl;
	}
}