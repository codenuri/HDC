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
	// vector �� ��� ��� ��ȸ��
	// ���ο� for ������ �����մϴ�.
	for (auto e : v)
	{
		std::cout << e << ", ";
	}
}
// � �Է��ϰ�, -1 �Է��� ������.