// 가상함수1

// 1. 컴파일러는 Base의 모든 가상함수의 주소를 담는 배열을 만들게 됩니다.

void* Base_v_table[] = { &Base::f1, &Base::f2, &Base::f3 };

class Base
{
	void* vtable = Base_v_table; // <= 컴파일러가 추가
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
		// f2가 가상함수 이므로
		// Base 에서 몇번째 순서인지 확인
		
		// p->vtable[1]()
}