// 5_STL_�����̳�4
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 1. ��� �����̳ʿ��� ���ſ� ��ȯ�� ���ÿ� �ϴ� 
	//    ��� �Լ��� ����.
	// => ���� �������� ���� �����̶�� ���� ��Ű����
	//    ��ȯ�� ���Ÿ� �и��Ҽ� �ۿ� �������ϴ�.
	int n = v.back(); // ��ȯ��
	v.pop_back();     // ���Ÿ�, ��ȯ�� �ȵ�
						// ���� Ÿ���� void

	std::cout << n << std::endl;
}
