#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail())
		{
			std::cout << "�Է½���" << std::endl;

			std::cin.clear(); // ���� ��Ʈ�� reset..
			std::cin.ignore(); // �Է� ���۸� ���� 
								// �ٽ� �õ��ؾ� �մϴ�.
			continue;
		}

		break;
	}
}