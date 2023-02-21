// vector8.cpp
#include <iostream>

// ��ü���� �ٽ� : �ʿ��� Ÿ���� ���� ������

// 1. �����ڰ� �ʿ��� Ÿ���� ������� �ְ�
// 2. ���� ���Ǵ� ������ Ÿ���� �̹� C++ ǥ�ؿ� ��������ִ�
// => "STL" �̶�� �մϴ�.
// => "Standard Template Library"

#include <vector> // class vector{};
#include <string> // class string{};

int main()
{
	int x[5] = { 1,2,3,4,5 };
	x[0] = 3;

	// 1. �迭�� �����Ŀ� ũ�� ������ �ȵ˴ϴ�.
	//    vector �� ũ�� ���氡���մϴ�.

	std::vector<int> v1 = { 1,2,3,4,5 };
	v1[0] = 3; // v1.operator[](0) = 3 �� ����(4����)

	v1.resize(10);

	// 2. �迭�� ��� �Լ��� ������
	//    vector�� ������ ����Լ��� �����ϴ�.
	std::vector<int> v2; // ũ�Ⱑ 0�� vector

	v2.push_back(5); // ���� �߰�
	v2.push_back(3);

	std::cout << v2.size() << std::endl; // 2
}
// C++�� ���� ��
// 1. vector ���� Ÿ���� ����� ���� ���� �� - class����
// 2. vector ���� Ÿ���� ����ϴ� ���� ���� ��