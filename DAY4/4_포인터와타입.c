// 4_�����Ϳ�Ÿ��.c - 107 page
#include <stdio.h>

int main()
{
	printf("%zu\n", sizeof(char));  // 1byte
	printf("%zu\n", sizeof(int));	// 4byte
	printf("%zu\n", sizeof(double));// 8byte

	// �ٽ� 1. ��� Ÿ���� ������ ������ ũ�Ⱑ �����ϴ�.
	//        => �ᱹ �ּҸ� ��� �ǹǷ�
	//		  => 32bit ȯ�� : 4byte,   64bit ȯ�� : 8byte
	printf("%zu\n", sizeof(char*));  // 8
	printf("%zu\n", sizeof(int*));	 // 8
	printf("%zu\n", sizeof(double*));// 8

	// ����
	int n1 = 10;   // 10���� ���ͷ�
	int n2 = 0x10; // 16���� ���ͷ�, �ᱹ 10������ 16

	int n = 0x11223344;

	// �ٽ� 2. ������ ������ Ÿ���� ������ �ǹ�.
	int*  p1 = &n;
	char* p2 = &n;

	// �������� Ÿ����
	// => �ּҰ� ����Ű�� �޸𸮸� �ؼ��ϴ� ����� �ǹ� �մϴ�.

	// n �� �ּҰ� 1000���� �϶�
	printf("%p, %x\n", p1, *p1); // 1000, 
							     // int* �̹Ƿ� 1000�������� 4����Ʈ �б�

	printf("%p, %x\n", p2, *p2); // 1000
								 // char* �̹Ƿ� 1000�������� 1����Ʈ�б�

	// int ������ �ּҸ� char* Ÿ�Կ� ��� ����
	// => �޸��� �ؼ� ����� �����ϰڴٴ� �ǹ�(107page ���� �Ʒ�)
}






