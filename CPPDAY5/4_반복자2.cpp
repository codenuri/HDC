// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. �ݺ����� ��Ȯ�� Ÿ��
	// ��Ȯ�� Ÿ���� ǥ���ϸ�
	// 1. �ڵ尡 ������ ���δ�.
	// 2. �����̳� ����� �ڵ� �����ؾ� �մϴ�.
//	std::list<int>::iterator p1 = s.begin(); 

	// auto �� ����ϴ� ���� �����մϴ�.
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