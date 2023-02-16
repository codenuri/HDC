// 6_배열과포인터3.c

void f1(int arg)
{
	// 핵심 1. 함수 인자를 값으로 받는 것은 
	//        "새로운 변수를 생성"하고 인자로 보낸 값으로 초기화하는것
	// int arg = n; // n은 main 에서 만든 변수
}

int main()
{
	int n = 0;
	f1(n);

	// 핵심 2. 변수는 자신과 동일 타입의 변수로 초기화(복사) 가능합니다.
	int n1 = 10;
	int n2 = n1; // ok

	// 핵심 3. 배열은 자신과 동일한 타입으로 복사 될수 없습니다.
	int x[3] = { 1,2,3 };
	int y[3] = x; // error.

	// 핵심 4. 배열의 이름은 1번째 요소의 주소로 변환될수 있으므로
	//        배열의 이름을 포인터에 대입할수 있습니다.
	int* p = x; // ok
}