#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};
typedef struct COMPLEX Complex;

// ���Ҽ� 2���� �޾Ƽ� ���� ���ϴ� �Լ�

Complex add(Complex c1, Complex c2)
{
	Complex temp;

	temp.re = c1.re + c2.re;
	temp.im = c1.im + c2.im;

	return temp;
}

int main()
{
	Complex c1 = { 1, 1 };
	Complex c2 = { 2, 2 };

	Complex c3 = add(c1, c2);

	printf("%lf, %lf\n", c3.re, c3.im);
}

// ��� ���α׷��־���� ����� ���
// 
// primitive type : ��� ��ü�� �����ϴ� �⺻ Ÿ��
//					=> int, char, double, float .....

// user define type ( UDT ) : struct �������� ���� Ÿ��





