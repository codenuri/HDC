#include <iostream>

// ���Ѱ��� ( tightly coupling )
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� �̸��� ���� ����ϴ°�
// => ��ü �Ұ����� ������ ������, Ȯ�强 ����.

// ���Ѱ��� ( loosely coupling )
// => �ϳ��� Ŭ������ �ٸ� Ŭ���� ���� ��Ģ�� ����
//    �߻�Ŭ������ ���ؼ�  ����ϴ°�
// => ��ü ������ ������ ������, Ȯ�强 �ִ�.


// �������̽� vs �߻�Ŭ����
// �������̽� : ���Ѿ� �ϴ� ��Ģ(���������Լ�)�� �ִ� ���
// �߻�Ŭ���� : ���Ѿ� �ϴ� ��Ģ(���������Լ�) + �ٸ� ���

// java, c# : abstract , interface ��� Ű���� ����.
// C++      : ���� Ű���� ����. �߻� Ŭ���� ������ ����

//---------------------------------------------
// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ�����κ��� �Ļ� �Ǿ�� �Ѵ�." ǥ������ ����
//        "��� ī�޶�� �Ʒ� �������̽��� ���� �ؾ� �Ѵ�" ��� ǥ��
/*
class ICamera
{
public:
	virtual void take() = 0;
};
*/
// C++ ���� �������̽� ���鶧 class �� ����ص� ������
// struct �� �ϴ� ��쵵 �����ϴ�.
#define interface struct  // �̷��� �ϱ⵵ �߽��ϴ�.

//interface ICamera
struct ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}
			// => �������̽��� �ᱹ ��� Ŭ���� �Դϴ�.
			// => �Ҹ��ڿ� �� virtual ���̼���
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