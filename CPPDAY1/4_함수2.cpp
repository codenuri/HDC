#include <cstdio>

// 4_함수2 
// 30 page. 오버로딩

// 함수 오버로딩(overloading)
// => 인자의 갯수나 타입이 다르면 동일이름의 함수를
//    여러개 만들수 있다.

// 대부분의 언어가 지원하는 문법
// C, 파이썬 이 이 문법을 지원하지 못합니다.

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}

// 아래 코드는 ok
void f1(int a) {}
void f1(int a, int b) {}


void f2(int a) {}
void f2(int a, int b = 0) {}
f2(0); // error


void f3(int a) {}
char f3(int a) { return 0; }
f3(0);	// error