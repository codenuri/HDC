#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		v.push_back(n);
	}
	// vector 의 모든 요소 순회는
	// 새로운 for 문으로 가능합니다.
	for (auto e : v)
	{
		std::cout << e << ", ";
	}
}
// 몇개 입력하고, -1 입력해 보세요.