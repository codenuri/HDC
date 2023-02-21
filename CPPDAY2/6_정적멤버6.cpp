class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// 1. static 멤버 데이타는 객체가 없어도 메모리에 있다.
	// 2. static 멤버 함수는 객체없이 호출가능
	void foo()	
	{
		// foo 가 호출되었다는 것은 
		// 객체를 만들었다는 의미!!
		color = 0;	// 1. ok
		cnt = 0;	// 2. ok
		goo();		// 3. ok
	}
	static void goo()	
	{
		color = 0;	// 4. error. 객체가 있어야 메모리에 존재
		cnt = 0;	// 5. ok. 항상 메모리에 존재
		foo();		// 6. error
	}
};
int Car::cnt;

int main()
{
	Car::goo();
}
// 핵심 : static 멤버 함수에서는 static 멤버만 접근 가능하다.