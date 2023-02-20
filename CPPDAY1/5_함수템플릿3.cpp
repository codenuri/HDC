#include <iostream>

template<typename T1, typename T2>
//decltype(a + b) Add(T1 a, T2 b) // error. a, b�� �������� ���
auto Add(T1 a, T2 b) -> decltype(a + b) // ok..
{								// �̷� ������ �ذ��ϱ� ����
								// ���� ��ȯ Ÿ�� ���� ź��
	return a + b;		
}

int main()
{
	std::cout << Add(1, 2.2) << std::endl;

//	a = 10; // ? error. ������ �����Ŀ� ��밡��
//	int a = 0;
//	a = 10; // ??ok.. 

}

