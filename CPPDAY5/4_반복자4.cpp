// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳� ��� ��� �����ϴ� ���
	// 1. range - for ��, ��� �����̳� ����, C++11 ����

	// => C++11 ���� ���� ��밡��
	// => ��ü ���Ÿ� ����, �Ϻκи� �Ϸ��� �Ʒ� �����..
	for (auto e : c)
	{
		std::cout << e << std::endl;
	}

	// 2. �ݺ��� ���, ��� �����̳� ��밡��
	auto p1 = c.begin();
	auto p2 = std::next(p1, 4); // p1�� 4ĭ�� �ݺ��� ���

	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

	// 3. [] ������ ��� - vector, deque�� ����, list �ȵ�
	for (int i = 0; i < c.size(); i++)
	{
		c[i] = 0;
	}
}

