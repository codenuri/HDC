// main2.c
#include <stdio.h>
#include "add.h" 
#include "sub.h"

int main()
{
	int ret1 = add(1, 2);
	int ret2 = sub(1, 2);

	printf("result : %d, %d\n", ret1, ret2);
}

// 1. sub.h   sub.c ���弼��
// 2. ��� ���� ��Ʈ���� 3���� �ҽ�(main2.c, add.c, sub.c)��
//    ���� ������ �ϼ���
// 3. ��ŷ�ؼ� �������� ����� ������ ������.
