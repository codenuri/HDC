// 3_����1 - 231
#include <iostream>

// �Լ��� �־��� ����� �����ϴٰ� ���� ������ ��� ó���ұ� ?

// ��� 1. �Լ����� ���α׷� ����

void db_backup()
{
	if (1) // ����
		std::exit(-1);	// ���α׷� ����
}

void db_remove() {}

int main()
{
	db_backup();
	db_remove();
	std::cout << "main continue" << std::endl;
}
