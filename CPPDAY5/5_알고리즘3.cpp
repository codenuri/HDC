// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// ���ڰ� 3�� ������ true ��ȯ�ϴ� �Լ�
bool foo(int n)
{
	return n % 3 == 0;
}

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };

	// �־��� �������� ó�� ������ "3" �� ã�ƶ�
	auto ret1 = std::find(v.begin(), v.end(), 3); 


	// �־��� �������� ó�� ������ "3�ǹ��" �� ã�ƶ�
	// std::find    : �� ã��,  3��° ���� ��
	// std::find_if : ���� �˻�, 3��° ���� �Լ��̸�

	auto ret2 = std::find_if(v.begin(), v.end(), foo);

	std::cout << *ret2 << std::endl; // 9
}