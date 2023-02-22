﻿// 5_상속2

// C++ 접근지정자는 "3개" 입니다.
// => private, protected, pubilc

// java, C# 등에는 1~2개 더있습니다.
// => package, internal 등.. 대부분 동일 모듈에서 접근 가능여부

class Base
{
private:   int a;	// 자신의 멤버 함수만 접근 가능	
protected: int b;	// 자신의 멤버 함수 + 파생 클래스 멤버 접근가능
public:    int c;	// 어디서든 접근 가능.
};
class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. 파생 클래스라도 기반 클래스 private
				//	      접근 안됨
		b = 0;  // ok
		c = 0;  
	}
};
int main()
{
	Base base;
	base.a = 0; // error. private
	base.b = 0; // error
	base.c = 0; // ok.    public
}
