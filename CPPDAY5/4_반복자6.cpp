// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = s.begin(); // C++98 ��Ÿ��
						// s�� �迭�̸� error

	auto p1 = std::begin(s); // C++11 ���ʹ� 
							 // �̷����ص� �ݺ��� ������
							 // �ֽ��ϴ�.
							// ���� : s�� �迭�̶� ����
	
}
