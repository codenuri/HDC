#include <string>
#include <vector>

void f1(std::string s) {}
void f2(std::vector<int> v) {}

int main()
{
	f2(10); // �ȵǴ°� ����.

	std::vector<int> v1(10); // ok
	std::vector<int> v2 = 10; // error.
				// �����ڰ� explicit vector(int) 

	f1("hello"); // �Ǵ°��� ����.

	std::string s1("hello"); // ok
	std::string s2 = "hello"; // ok
		// �����ڰ� explicit �ƴ�
		// string(const char*) ������ ȣ��
		
}