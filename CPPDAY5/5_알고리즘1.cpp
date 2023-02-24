// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.
	// 방법 1. 멤버함수 find를 제공하자.
	// 장점 : 사용하기 쉽다.
	// 단점 : 모든 컨테이너에 유사한 일을 하는 find를
	//	     모두 만들어야 한다.
//	s.find(3);
//	v.find(3);

	// 방법 2. 한개의 find 를 템플릿으로 만들어서
	//         모든 컨테이너에 사용가능하게 하자.
	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);	

}