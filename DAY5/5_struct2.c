#include <stdio.h>

// struct : ������ ����Ÿ�� ��� ���ο� Ÿ���� ����� ����

struct COMPLEX
{
	// ������ �����ϴ� ������� ������ Ÿ���� ��������
	double re;
	double im;
};

int main()
{
	// �ٽ� 1. ����ü ������ �����Ҷ��� struct Ű���� �ʿ�
	struct COMPLEX c1;

	// �ٽ� 2. �� ����� ������ ���� . ���
	c1.re = 1.1;
	c1.im = 2.2;

	// �ٽ� 3. �ʱ�ȭ�� {} ���
	struct COMPLEX c2 = { 1, 1 };
}
