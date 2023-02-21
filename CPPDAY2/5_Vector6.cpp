// vector 2번 복사해오세요

#include <iostream>
#include "vector.h"

int main()
{
	vector v(4);

	int cnt = 0;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		v.set_at(cnt, n);

		++cnt;
		if (cnt == v.size())
		{
			v.resize(cnt + 4); // 크기 변경하는 코드를
							// 다시 작성할필요 없습니다
		}
	}

	std::cout << "입력된 갯수  : " << cnt << std::endl;
	std::cout << "vector 크기 : " << v.size() << std::endl;

	for (int i = 0; i < cnt; i++)
	{
		std::cout << v.get_at(i) << ", ";
	}
}
// 9개입력후 -1 입력해 보세요