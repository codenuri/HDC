// 3_변수7 - 26 page
#include <iostream>
// 헤더 헷갈리지 마세요
#include <string.h> // C언어 헤더, strcmp 등의 함수
#include <cstring>  // string.h 의 C++ 버전
					// 즉, strcmp(), std::strcmp()

#include <string>	// std::string 타입을 위한 헤더

int main()
{
	// C언어의 문자열
	char s1[] = "ABCD";
	char s2[] = "ABCD";

//	if (s1 == s2) {} // 주소 비교. 항상 false
//	if ( strcmp(s1,s2) == 0 ) {} // ok

	// C++ 문자열 타입
	std::string s3 = "ABCD";
	std::string s4 = "ABCD";
	std::string s5 = s3 + s4; // 덧셈가능

	if (s3 == s4) {} // ok
	s3 = s4; // ok

	std::cout << s5 << std::endl;
///	s3.append("A");
}