#include <iostream>

// Ŭ������ ����� 2���� ���
// 1. Ŭ���� ���� ��� �Լ� �������� �����ϴ� ���
// 2. Ŭ���� ���𿡴� ����Լ��� �����ϰ�
//    ��� �Լ��� ������ ������ �ҽ� ���Ͽ� �ۼ�


#include "vector.h"

int main()
{
	vector v(4);

	v.set_at(2, 3);

	v.resize(8);

	int n = v.get_at(2);

	std::cout << n << std::endl; // 3

}