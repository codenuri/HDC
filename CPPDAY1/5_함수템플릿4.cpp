#include <iostream>

// 1. return ������ �Ѱ���� ���� ��ȯ ��ü�� ���� �����մϴ�.
//    => "���� Ÿ�� �ڸ��� auto" �� ��� �˴ϴ�.
template<typename T1, typename T2>
auto Add(T1 a, T2 b) //-> decltype(a+b)
{					
	// �Ʒ� ó�� return ���� 2���̻��̸� "auto"�� ǥ���ϸ�
	// ����.
	if (a == 0) return b;

	return a + b;
}



int main()
{
	std::cout << Add(1, 2.2) << std::endl;


}

