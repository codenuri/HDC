// 3_예외1 - 231
#include <iostream>

// 방법 2. 호출자에게 실패 했음을 알린다
// => 함수 반환값으로 실패로 약속된 값 반환
// => C언어의 대표적인 에러 처리 방식

// 단점
// 1. 반환값과 실패의 전달이 분리되지 않는다.
// => -1이 연산의 결과 인가 ? 실패를 의미 하는가 ?

// 2. 호출자가 실패를 무시할수 있다.
// => 실패를 무시하면 더욱 큰 문제가 발생할수 있다.

int db_backup()
{
	if (1)
		return -1;
}

void db_remove() {}

int main()
{
	int ret = db_backup();
//	if (ret == -1)
//	{
//		// ... 
//	}

	db_remove();
	std::cout << "main continue" << std::endl;
}
