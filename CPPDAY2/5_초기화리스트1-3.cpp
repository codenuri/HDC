// 1. �Ʒ� �ڵ� ���������°� Ȯ���ϼ���
// 2. ���� ���� �ʰ� ������ ������.
class Test
{
	const int c;
public:
	Test(int n) : c(n)
	{
//		c = n; // error. ����� ���� �ȵ�
	}
};

int main()
{
	Test t(3); 
}
