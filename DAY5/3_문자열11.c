#include <stdio.h>
#include <string.h>

int main()
{
	// 1. �ѱ��� ��� �ؾ� �ұ� ?
	// SBCS : Single Byte Char Set
	// DBCS : Double Byte Char Set ( ���� 1����Ʈ, �ѱ� 2����Ʈ)
	// ���� �Ʒ� �ڵ尡 DBCS
	char s[] = "ABCD�����ٶ�";

	printf("%d, %d\n", sizeof(s), strlen(s)); // 13, 12

	printf("%d, %d, %d, %d\n", s[3], s[4], s[5], s[6]);
							// 68(D) 220

}