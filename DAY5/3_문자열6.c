// 3_���ڿ�4.c
#include <stdio.h>
#include <string.h> // �� �ȿ� ���ڿ� ���� �Լ��� 
					// �̹� ������� �ֽ��ϴ�.
int main()
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";

	int ret = strcmp(s1, s2); // Cǥ�� �Լ�

	if (ret == 0)
		printf("���� ���ڿ�\n");
	else
		printf("�ٸ� ���ڿ�\n");

	// �ٽ�.. 2�� ���ڿ� ��
	// if ( s1 == s2 )          : Ʋ��. �׻� false
	// if (strcmp(s1, s2) == 0) : ok. strcmp �Լ� ���
}