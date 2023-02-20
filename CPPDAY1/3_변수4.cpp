// 21 page ~

// 중요!

int main()
{
	double x[3] = { 1,2,3 };

//	double n = x[0];

	// auto : 우변의 표현식을 보고 좌변 변수의 타입을 
	//			컴파일러에게 결정해 달라는 지시어.
	auto n = x[0]; // 컴파일 하면 "double n = x[0]" 이 됩니다.

	// auto       : 우변의 타입을 조사해 달라
	// decltype() : () 안에 있는 타입을 조사해 달라.
	decltype(n) d; // double d;

	
	// auto 를 정확히 이해하는 것은 아주 어렵습니다.
	// => C++ 중급 참고.. 지금은 간단한 개념만.
//	const int c = 10;
//	auto a = c; // 1. int a  =>  답
				// 2. const int a
}
