
// github.com/webkit	=> 사파리브라우져 소스
//						=> 크롬 브라우져의 초기 버전
// webkit/source/wtf/wtf/seconds.h 열어 보세요

// 상수 멤버 함수는 "선택"이 아닌 "필수" 문법 입니다.

// 객체의 상태를 변경하지 않은 모든 멤버 함수는(getxxx)
// "반드시" 상수 멤버 함수로 해야 합니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

//	int getArea() { return w * h; } // 잘못 만든 코드
	int getArea() const { return w * h; } // ok
};


// void foo(Rect r) // bad. 사용자 정의 타입은
					//      call by value 사용하지 마세요
void foo(const Rect& r) // good. 사용자 정의 타입은 const &로 받으세요
{
	int n = r.getArea(); // ?
}

int main()
{
	Rect r(1, 1, 10, 10);	// 상수 객체 아님.

	int n = r.getArea();	// ok
	
	foo(r);
}



