// 5_struct1.c - 129 page
#include <stdio.h>

// ���Ҽ� 2���� ���ϴ� �Լ��� ����� ���ô�.
// ���Ҽ� : �Ǽ���(real), �����(image)

void add(double ar,  double ai,  double br, double bi,
	     double* sr, double* si)
{
	*sr = ar + br;
	*si = ai + bi;
}

int main()
{
	double sr = 0, si = 0;

	// 1.1 + 1.1i, 2.2 +2.2i ����
	add(1.1, 1.1, 2.2, 2.2, &sr, &si); 

	printf("%lf, %lf\n", sr, si);
}
// �����ڰ� �ʿ��Ѱ�
// ���Ҽ� => C�� ���Ҽ� Ÿ���� ����. double 2���� ǥ��
// ��¥   => int * 3
// ���   => char[] �̸�, int ����, int Ű..