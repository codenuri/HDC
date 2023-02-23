// �����Լ�1

// 1. �����Ϸ��� Base�� ��� �����Լ��� �ּҸ� ��� �迭�� ����� �˴ϴ�.

void* Base_v_table[] = { &Base::f1, &Base::f2, &Base::f3 };

class Base
{
	void* vtable = Base_v_table; // <= �����Ϸ��� �߰�
	int x;
public:
	virtual void f1() {}
	virtual void f2() {}
	virtual void f3() {}
};
//------------------------------------------
void* Derived_v_table[] = { &Base::f1, &Derived::f2, &Base::f3 };

class Derived : public Base
{
	vtable = Derived_v_table;
	int y;
public:
	void f2() override {}
};
//-------------------
int main()
{
	Base b;
	Derived d;

	Base* p = &d;
	p->f2(); // Derived f2()
		// f2�� �����Լ� �̹Ƿ�
		// Base ���� ���° �������� Ȯ��
		
		// p->vtable[1]()
}