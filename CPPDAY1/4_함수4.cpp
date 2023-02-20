// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿 - 33 page
// 아주 중요 !!!

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 함수의 구현이 동일(유사)한데, 여러 타입에 대해서 필요하다면
// 함수를 만들지 말고, 함수의 틀(template)을 만드세요!!

template<typename T> 
T square(T a)
{
	return a * a;
}

int main()
{
	// 1. 함수 템플릿(틀)을 사용하는 정확한 표기법
//	square<int>(3);		// 1. square(int) 함수 생성
						// 2. 생성된 함수를 호출(3전달)
//	square<double>(3.4);

	// 2. 템플릿 사용시 타입인자를 생략하면
	//    함수 인자를 가지고 컴파일러가 타입을 결정
	square(3); // square<int>(3) 과 동일
	square(3.4); //square<double>(3.4) 과 동일
}

// godbolt.org 에 접속해 보세요

// 코드 폭팔(Code Bloat)

// => 템플릿 사용시 컴파일러가 너무 많은 함수(클래스)를 만들어서
// => 코드 메모리 가 증가하는 현상
// => 임베디드 환경에서 템플릿 사용시 주의 해야 합니다.

