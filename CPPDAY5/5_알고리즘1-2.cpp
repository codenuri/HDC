// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// �˰��� 
// => "������ �ذ��ϴ� ���" �̶�� �Ϲ� ���� ���

// STL ���� �˰���
// => std::find ���� ����Լ��� �ƴ� �Ϲ� �Լ�(���ø�)
// => <algorithm> ���

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	auto ret1 = std::find(s.begin(), s.end(), 3);

	// �˻� ���н� : find 2��°�� ������ �ݺ��ڰ� ���ɴϴ�
	if (ret1 == s.end())
	{
		std::cout << "�˻� ����" << std::endl;
	}
	else
	{
		std::cout << "���� : " << *ret1 << std::endl;
	}
}