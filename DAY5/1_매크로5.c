#include <stdio.h>

#define WIDTH 10		// WIDTH �� 10����

//#define DEBUG		// ����׶�� �ɺ��� ����

int main()
{
	int xpos = 3; // ���α׷����� ���� ���� ����ϴ� ����..

#ifdef _DEBUG
	// �׷���. ��� ����� �̻��ؼ� xpos ���� ��� ����� ���� �ʹ�.
	printf("xpos = %d\n", xpos);

#endif 

}