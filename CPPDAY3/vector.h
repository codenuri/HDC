#pragma once

// vector.h �߰��ؼ� �Ʒ� Ŭ���� ����� ��������
class vector
{
private:
	int* ptr;
	int  sz;

public:
	// 1. ������ �Ҹ��ڴ� "��� ��� �Լ�"�ɼ� �����ϴ�.
	vector(int size);
	~vector();

	// 2. ��ü�� ���� ����(�������Ÿ ����) ���� ������
	//    �ݵ�� ��� ��� �Լ��� �ϼ���.
	void set_at(int idx, int value);
	int get_at(int idx) const;

	void resize(int newsize);
	int size() const;
};
