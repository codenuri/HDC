// 3_����7 - 26 page
#include <iostream>
// ��� �򰥸��� ������
#include <string.h> // C��� ���, strcmp ���� �Լ�
#include <cstring>  // string.h �� C++ ����
					// ��, strcmp(), std::strcmp()

#include <string>	// std::string Ÿ���� ���� ���

int main()
{
	// C����� ���ڿ�
	char s1[] = "ABCD";
	char s2[] = "ABCD";

//	if (s1 == s2) {} // �ּ� ��. �׻� false
//	if ( strcmp(s1,s2) == 0 ) {} // ok

	// C++ ���ڿ� Ÿ��
	std::string s3 = "ABCD";
	std::string s4 = "ABCD";
	std::string s5 = s3 + s4; // ��������

	if (s3 == s4) {} // ok
	s3 = s4; // ok

	std::cout << s5 << std::endl;
///	s3.append("A");
}