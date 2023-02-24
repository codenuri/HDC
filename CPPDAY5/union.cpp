// union
#include <iostream>

// struct : 구조체
// union  : 공용체, 하나의 메모리를 여러개 이름으로 접근

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

	std::cout << ip.num[0]; // 44 인데
						// cout 이 44를 아스키 코드로인식
						// 해서 문자로 출력
}