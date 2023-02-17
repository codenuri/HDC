// 3_���ڿ�7.c
#include <stdio.h>	// ǥ�� ����� �Լ���
#include <string.h> // ���ڿ� �Լ���

int main()
{
	char s1[]   = "ABC"; // {65, 66, 67, 0}
	char s2[10] = "ABC"; // {65, 66, 67, 0, 0,0,0,0,0,0}

	// 1. sizeof : �޸� ũ��
	//    strlen : ���ڿ� ����
	printf("%zu %zu\n", sizeof(s1), strlen(s1)); // 4, 3
	printf("%zu %zu\n", sizeof(s2), strlen(s2)); // 10, 3

	// 2. ���ڿ� ����
	char s3[] = "ABC";
	char s4[10];

	// ���ڿ��� �����ϰ� �ʹ�.
	//s4 = s3; // error
	//strcpy(s4, s3); // s4 <= s3���� ����. ���� ������ ������
	
	strcpy_s(s4, sizeof(s4), s3);

	printf("%s\n", s4);


	// ���ڿ� ����
//	strcat(s4, s3); // s4 �ڿ� s3�� �ٿ���!
	strcat_s(s4, sizeof(s4) - strlen(s4), s3);

	printf("%s\n", s4);

	//-------------------------
	// ���ڿ� ��
	char s5[] = "ABC";
	char s6[] = "XBC";

	// ���ڿ��� ������ : 0
	// 1��° ���ڰ� ũ��(���ĺ�) : 1
	// 2��° ���ڰ� ũ��(���ĺ�) : -1
	printf("strcmp��� : %d\n", strcmp(s5, s6));

	// O/X ���ϼ���
	// ���ڿ� �񱳴� if ( s1 == s2 ) ���Ѵ�. => X
}
// cppreference.com 