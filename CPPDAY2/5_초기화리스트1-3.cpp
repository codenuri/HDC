// 1. 아래 코드 에러나오는거 확인하세요
// 2. 에러 나지 않게 변경해 보세요.
class Test
{
	const int c;
public:
	Test(int n) : c(n)
	{
//		c = n; // error. 상수는 대입 안됨
	}
};

int main()
{
	Test t(3); 
}
