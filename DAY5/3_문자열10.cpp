#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "ABCD";	// ���ڿ��� ���ÿ� ����. stack �� R/W����
//	char* s2  = "ABCD";
	const char* s2 = "ABCD";

	// �Ʒ� 2�� ������ ������
	s1[0] = 'X';	// ok
	s2[0] = 'X';	// s2�� char* ��� runtime error
					// s2�� const char* ��� compile error

	printf("���� �׷� ��� ����\n");
}