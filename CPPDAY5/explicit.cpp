// explicit.cpp

class Vector
{
public:
	// explicit ������
	// => ���� �ʱ�ȭ�� ��밡���ϰ�
	// => ���� �ʱ�ȭ�� ����!
	explicit Vector(int sz) {}
};

// �Լ��� ���ڸ� �����ϴ� ���� "���� �ʱ�ȭ" �Դϴ�.
void f(Vector v) {} // Vector v = 10

int main()
{
	// ���ڰ� int �Ѱ� �����ڰ� �ִٸ� �Ʒ� ó�� ��밡���մϴ�.
	Vector v1(10);	// ����(direct) �ʱ�ȭ
	Vector v2 = 10;	// ����(copy)   �ʱ�ȭ

	f(10);
}




