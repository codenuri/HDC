// 3_���ڿ�4.c
#include <stdio.h>

// ������ 0, �ٸ��� 1
int mystrcmp(const char* p1, const char* p2)
{
	int i = 0;

	while ( p1[i] != 0 && p2[i] != 0 )
	{
		if (p1[i] != p2[i])
			return 1;

		++i;
	}

	return 0; // ����..
}

int main()
{
	const char s1[] = "ABCD";
	const char s2[] = "ABCD";

	int ret = mystrcmp(s1, s2);

	if (ret == 0)
		printf("���� ���ڿ�\n");
	else 
		printf("�ٸ� ���ڿ�\n");
}