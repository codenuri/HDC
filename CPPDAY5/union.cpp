// union
#include <iostream>

// struct : ����ü
// union  : ����ü, �ϳ��� �޸𸮸� ������ �̸����� ����

//struct IPAddress
union IPAddress
{
	int addr;
	char num[4];
};

// 168.1.127.100
int main()
{
	std::cout << sizeof(IPAddress) << std::endl;

	IPAddress ip;

	ip.addr = 0x11223344;

	printf("%x\n", ip.num[0]); // 44

	std::cout << ip.num[0]; // 44 �ε�
						// cout �� 44�� �ƽ�Ű �ڵ���ν�
						// �ؼ� ���ڷ� ���
}