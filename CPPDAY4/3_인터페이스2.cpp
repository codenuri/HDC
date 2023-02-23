#include <iostream>

// H/W �� ������ ���ô�.
// PC�� USB
// => ��� ��Ģ�� ����� ��Ģ�� ���� PC�� USB �� ����
// => ��Ģ�� ��Ų ��� USB �� ���� PC�� �������� ���ᰡ��

// ī�޶�� ī�޶����� ������ ��Ģ�� ���� ���� ����.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ�����κ��� �Ļ� �Ǿ�� �Ѵ�.
class ICamera
{
public:
	virtual void take() = 0;
};

// ���� ī�޶�� ������ "��Ģ"�� �ִ�.
// "��Ģ" ��θ� ����ϸ� �ȴ�.
class People
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

// ���� ��� ī�޶�� ��Ģ�� ���Ѿ� �մϴ�.

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