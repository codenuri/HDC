// ���ڷ� ���� ���� �б⸸ �Ϸ��� �մϴ�.
// ������ ���� �ڵ�� ? => f1�� ���� �ڵ�

void f1(int x)        { int a = x; }
void f2(const int& x) { int a = x; } // int a = *p;

int main()
{
	int n = 10;
	f1(n);
	f2(n);
}
// ������ : �Ʒ� ��Ģ �ܿ켼��.

// A. �Լ��� ���� ���ڸ� �����Ϸ���
// 1. �����͸� ����ص� �ǰ�  : void swap(int* a, int* b)
// 2. ����(reference)�� ����ص� �˴ϴ� : void swap(int& a, int& b)
//    => ������ reference ����.

// B. �Լ��� ���� ���ڸ� �������� �ʴ´ٸ�

// primitive type �ΰ��(char, short, int, long, float, double��)
// => call by value
// => f1(int n) 

// user define type : struct �� Ŭ������ ���� Ÿ��	
// => ����ڰ� ���� ����ų�(Rect)
// => ǥ�� ���̺귯���� ����(std::string) �Ǵ� �͵�
// => const & ���
// => f1(const Rect& rc)
// => f1(const std::string& s) 

// std::string �� �Ʒ� ó�� �̸� ������� �ִ°�
struct string
{
	//.. ���ڿ� ����
};
// ���� : "C++ core guideline" �˻��� ������