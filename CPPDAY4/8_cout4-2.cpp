#include <iostream>

int main()
{
	// cin �� �Է� ���ۿ��� ���� ���� �˴ϴ�.
	int n = 0;

	std::cin >> n; // �̼��� 'a' �� �Է������� 

	std::cout << n << std::endl; 
				// 1. 0,   2. 97,   3. 10,   4. -1
				// => 0.. �Է� ����!
	if (std::cin.fail())
		std::cout << "�Է� ����" << std::endl;
}