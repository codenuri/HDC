#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};
typedef struct COMPLEX Complex;

int main()
{
	Complex c1 = { 1, 1 };

	Complex* p1 = &c1;

	// ����ü ����� �����ϴ� 2���� ���
	// 1. �����̸�.���
	c1.re = 10;

	// 2. ������->���
	p1->im = 20;

}



