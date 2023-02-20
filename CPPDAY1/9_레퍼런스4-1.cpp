// 9_레퍼런스4.cpp
// 45page.. 아주 중요합니다. 반드시 이해 해야 합니다.

struct Rect
{
	int left, top, right, bottom;
};

//void f1(Rect r) // call by value : 원본 수정 안됨
				// => 하지만 복사본 생성에 따른 오버헤드가 있다

//void f1(Rect& r)	// call by reference: 복사본 없음.
					// 메모리 오버헤드 없음.					
					// 실수로 원본이 수정될수도 있다.

void f1(const Rect& r) // C++에서 가장 널리 사용하는 
						// 코드!!
{
//	r.right = 100; // error. 상수 참조 이므로
}

int main()
{
	Rect rc = { 1,1,10,10 };

	// f1은 절대 rc의 상태를 변경하면 안된다.
	f1(rc);	
}