#include <iostream>

// �ٽ� 2. try ~ catch �� ���� ���

int db_backup()
{
	if (1)
		throw 1;

	return 100;
}



void db_remove() {}

int main()
{
	// 1. ���� ���ɼ��� �ִ� �Լ� ȣ��� try{} �ȿ��� ȣ��
	try
	{
		int ret = db_backup();

		// �̺κ��� ���ܰ� �߻����� ���� ��츸 �����
		db_remove();

	}
	catch (int e)
	{
		// ������ ������ Ȯ������
		// 1. ���� ������ ������ ����ڿ��� �˸���
		//    std::exit() ������ ���� �ϼ���

		// 2. �׷��� ���� ��� ���α׷��� ��� ����˴ϴ�.
		std::cout << "catch.." << std::endl;
	}
		
	std::cout << "main continue" << std::endl;
}


