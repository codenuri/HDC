// 9_레퍼런스4.cpp
// 45page.. 아주 중요합니다. 반드시 이해 해야 합니다.

struct Rect
{
	int left, top, right, bottom;
};

// call by value : 원본 변수를 절대 수정할수 없다.(복사본생성)
//				   원본 변수를 수정하지 않겠다는 약속
void f1(int n) 
{
	n = 20; // 복사본만 변경. 원본 x는 수정 안됨.
}

int main()
{
	int x = 10;

	f1(x);	// f1 함수는 절대로 x값을 변경하면 안된다.
}