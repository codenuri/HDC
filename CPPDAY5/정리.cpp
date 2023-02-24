1. C++은 C의 모든 것을 포함한다.(호환가능)
2. C++11 이후 "MODERN C++"
3. 0 대신 nullptr
4. std::cout, std::cin, <iostream>
5. 함수 특징 : 디폴트 인자, 오버로딩, 인라인, 템플릿, 
             후위 반환 타입, 함수 삭제
class Point
{
public:
    Point(const Point&) = delete; // 복사 생성자 만들지말라
};
Point p1;
Point p2(p1); // error. 복사 생성자가 삭제 되었다.

6. int* p = nullptr; // ok
   int& r = nullptr; // error.레퍼런스는 정확한 초기값
   //                   (다른변수)필요
   7. 멤버 함수는 클래스 외부에 만들어도 됩니다.(파일분할)

       8. 복사 생성자 특징

       9. 연산자 재정의는 "멤버" 또는"일반함수"
       n + p = > n.operator+(Point) 인데,

10. std::endl 은 함수입니다.
std::cout << std::endl;
std::endl(std::cout) // ok..

11. 생성자 - 여러개 만들수 있다.
    소멸자 - 인자를 가질수 없다. 한개만 만들수 있다.

12. throw, catch, try 

13. static 멤버함수에서 잘못된 코드 찾기 !
static void foo()
{
    // 이안에서 접근할수 없는것 찾기!
}

14. vector = > 연속된 메모리
// stack, queue, set, hash 도 모두 있습니다.

15. STL 알고리즘은 멤버함수 이다. = > X

16. 강한결합이 확장성 있는 디자인 이다. = > X
인터페이스 만들때는 "inteface" 키워드를 사용한다 = > X
기능확장에 열려 있고, 코드 수정에는 닫혀 있어야 한다 = > OCP
--------------------------------------------
소멸자도 사용자가 만들지 않으면 컴파일러가 제공한다고 표현합니다.

// 빅4 : 컴파일러가 만드는 함수들
// 생성자, 소멸자, 복사 생성자, 대입연산자
Point p1 = p2; // 복사 생성자
p1 = p2; // 대입연산자
         // p1.operator=(p2)

// isocpp.org
// effective-modern C++ => 중급 서적