#include <iostream>

// H/W 를 생각해 봅시다.
// PC와 USB
// => 산업 규칙을 만들고 규칙에 따라 PC와 USB 를 제작
// => 규칙을 지킨 모든 USB 는 기존 PC의 수정없이 연결가능

// 카메라와 카메라사용자 사이의 규칙을 먼저 설계 하자.

// 규칙 : 모든 카메라는 아래 클래스로부터 파생 되어야 한다.
class ICamera
{
public:
	virtual void take() = 0;
};

// 실제 카메라는 없지만 "규칙"이 있다.
// "규칙" 대로만 사용하면 된다.
class People
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

// 이제 모든 카메라는 규칙을 지켜야 합니다.

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