#include <iostream>

// ��� 3. ��ü���� ����� "���� ����" ���

// �ٽ� 1. �Լ��� �����ϸ� ���ܸ� ������(throw)

// ���� 1. ��ȯ���� ������ ������ �Ϻ��� �и��ȴ�.
//     2. ȣ���ڴ� ������ ���ܸ� �ݵ�� ó���ؾ� �Ѵ�.
//        => ó������ ������ ���α׷��� ������ ���� �Ѵ�.
int db_backup()
{
	if (1)
		throw 1;

	return 100;
}



void db_remove() {}

int main()
{
	int ret = db_backup();

	db_remove();
	std::cout << "main continue" << std::endl;
}
