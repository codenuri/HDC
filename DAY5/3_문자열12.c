#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = "ABCD�����ٶ�";

	printf("%d, %d\n", sizeof(s), strlen(s)); // 13, 12


	// �޸𸮰� ������.. 
	// ���ϰ� ��� ���ڸ� 2����Ʈ�� ����.

	// wchar_t : 2����Ʈ ���� Ÿ��
	// L"���ڿ�": ��� ���ڸ� 2����Ʈ�� ó��

	wchar_t w[] = L"ABCD�����ٶ�";

	printf("%d, %d\n", sizeof(w), strlen(w)); // 18, 1 
	printf("%d, %d\n", sizeof(w), wcslen(w)); // 18, 1

	// strxxx : SBCS, DBCS ���ڿ��� ���� ���ڿ� �Լ�
	// wcsxxx : wide charater(2����Ʈ ���ڿ�)�� ���� ���ڿ� �Լ�

	// wide charater ������
	// 1. 2byte ���� �������� ���� ���� ����
	// 2. ��κ� ���� �ε�, ��� 2����Ʈ�ϸ� �޸� ��뷮 2��

	// UTF-8
	// ���� �ٸ� ����Ʈ ���
	// 1����Ʈ ��� : 0 ~ 127���� ���
	// 2����Ʈ     : 1��° ����Ʈ�� 128 ~ 210
	// 3����Ʈ     : 211 ~ 240
	// 4����Ʈ     : 240 ~ 
}
// unicode.org

