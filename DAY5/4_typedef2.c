#include <stdio.h>

// typedef Ű���带 ����ϸ� ���� Ÿ���� ������ ����� �ֽ��ϴ�
// 24 page
typedef int       i32;
typedef short     i16;
typedef long long i64;

// �Ӻ���� �о߿��� ����ϴ� ���
//#define MACHINE_16

#ifdef MACHINE_16
	typedef int       i16;
#else
	typedef short     i16;
#endif

int main()
{
	i32 n = 10; // int n = 10; �� ����
}