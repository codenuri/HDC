#include <iostream>

// ���� �θ� ����ϴ� ���� ���� ���
// => ���� ��ȣ�� �Լ� ����� ���� ����ü ����
template<typename T>
struct Result
{
	int error_code;
	T value;
};

// ��� : ��� �Լ��� Result<T> �� ��ȯ�ϱ�� ����.
// => ���н� ������ error_code �� ��ϵǰ�
// => ������ value �� ��ȯ�� ����ȴ�.

// attribute : �����Ϸ����� �����ϴ� ����
//[[nodiscard]] : ���ϰ��� ���� ������ ��� ���� �ش޶�

[[nodiscard]]
Result<int> db_backup()
{
	Result<int> ret = { 0, 100 };
	return ret;
}

int main()
{
	db_backup();
}