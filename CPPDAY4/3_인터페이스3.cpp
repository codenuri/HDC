#include <iostream>

// 강한결합 ( tightly coupling )
// => 하나의 클래스가 다른 클래스 사용시 이름을 직접 사용하는것
// => 교체 불가능한 경직된 디자인, 확장성 없다.

// 약한결합 ( loosely coupling )
// => 하나의 클래스가 다른 클래스 사용시 규칙을 담은
//    추상클래스를 통해서  사용하는것
// => 교체 가능한 유연한 디자인, 확장성 있다.


// 인터페이스 vs 추상클래스
// 인터페이스 : 지켜야 하는 규칙(순수가상함수)만 있는 경우
// 추상클래스 : 지켜야 하는 규칙(순수가상함수) + 다른 멤버

// java, c# : abstract , interface 라는 키워드 있음.
// C++      : 별도 키워드 없음. 추상 클래스 문법만 존재

//---------------------------------------------
// 규칙 : "모든 카메라는 아래 클래스로부터 파생 되어야 한다." 표현하지 말고
//        "모든 카메라는 아래 인터페이스를 구현 해야 한다" 라고 표현
/*
class ICamera
{
public:
	virtual void take() = 0;
};
*/
// C++ 에서 인터페이스 만들때 class 를 사용해도 되지만
// struct 로 하는 경우도 많습니다.
#define interface struct  // 이렇게 하기도 했습니다.

//interface ICamera
struct ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}
			// => 인터페이스도 결국 기반 클래스 입니다.
			// => 소멸자에 꼭 virtual 붙이세요
};



class People
{
public:
	void use_camera(ICamera* p) { p->take(); }
};



class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);


	HDCamera hc;
	p.use_camera(&hc);

	UHDCamera uhc;
	p.use_camera(&uhc);

}