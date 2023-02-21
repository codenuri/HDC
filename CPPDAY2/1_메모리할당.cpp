// keyword(키워드)
// => 컴파일러가 인식하는 단어. 
// => int, double 등의 타입이름
// => if, switch, while, break, continue
// 키워드는 헤더등을 포함하지 않아도 컴파일러 자체가 인식

// printf : 함수 문법을 사용해서 만들어진 함수!
// => 사용하려면 <stdio.h> 헤더 필요

// cppreference.com
// rust-lang.org


// 2_메모리할당 - 52 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int; // int 타입 한개 할당
	delete p1;

	int* p2 = new int[10]; // int 10개, 40 바이트할당
	delete[] p2; // 주의! 배열 모양으로 할당한 경우
				// delete 가 아닌 delete[] 사용
}
//				malloc			new
// 정체			함수				keyword
// 인자			정수(크기)		타입
// 반환타입		void* 반환		인자로 전달된 타입*
//				캐스팅해서 사용	캐스팅 필요 없음
// 
// 결정적차이		생성자호출안됨.	생성자 호출됨