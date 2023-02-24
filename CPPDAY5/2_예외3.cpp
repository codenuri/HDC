#include <iostream>

// 방법 3. 객체지향 언어의 "예외 문법" 사용

// 핵심 1. 함수가 실패하면 예외를 던진다(throw)

// 장점 1. 반환값과 실패의 전달이 완벽히 분리된다.
//     2. 호출자는 던져진 예외를 반드시 처리해야 한다.
//        => 처리되지 않으면 프로그램은 비정상 종료 한다.
int db_backup()
{
	if (1)
		throw 1;

	return 100;
}



void db_remove() {}

int main()
{
	int ret = db_backup();

	db_remove();
	std::cout << "main continue" << std::endl;
}
