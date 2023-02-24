#include <vector>
#include <iostream>

// 깊은 복사를 사용한 swap 
// => 느립니다.
template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
// move 를 사용한 swap : 아주 빠르게 동작합니다.
template<typename T>
void swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}
// 결론 
// 어떤 타입이 "동적 메모리"를 사용할때 ( vector 등)
// => 일반적으로는 깊은 복사를 유용한데,
// => 그런데, swap 등의 알고리즘 작성시에는 move 가 
//    빠릅니다.
/*
// C++
vector v2 = v1; // 깊은 복사
vector v2 = std::move(v1); // 자원 이동

// Rust
vector v2 = v1; // 자원 이동
vector v2 = v1.clone(); // 깊은 복사
*/
// 아래 2줄은 완전히 합법입니다. 아무일도 하지 않습니다.
// free(0);
// delete 0;

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };	
	std::vector<int> v2 = { 6,7,8,9,10 };

	swap(v1, v2);
	
	

}