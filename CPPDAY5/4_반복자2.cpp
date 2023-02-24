// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. 반복자의 정확한 타입
	// 정확한 타입을 표기하면
	// 1. 코드가 복잡해 보인다.
	// 2. 컨테이너 변경시 코드 변경해야 합니다.
//	std::list<int>::iterator p1 = s.begin(); 

	// auto 를 사용하는 것을 권장합니다.
	auto p1 = s.begin();
}
/*
namespace std
{
	template<typename T>
	class list
	{
		class iterator {};
	};
}
*/