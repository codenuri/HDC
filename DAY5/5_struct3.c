#include <stdio.h>

struct COMPLEX
{
	double re;
	double im;
};

typedef struct COMPLEX Complex;

int main()
{
	// �ٽ� 1. ����ü ������ �����Ҷ��� struct Ű���� �ʿ�
	struct COMPLEX c1;

	// �ٽ� 2. typedef �ؼ� ����ϸ� struct ��� �˴ϴ�.
	Complex c2; // �ʱ�ȭ ���� ���� ���, �� ����� �����Ⱚ
	Complex c3 = { 1,1 };

	printf("%lf, %lf\n", c3.re, c3.im);
}





