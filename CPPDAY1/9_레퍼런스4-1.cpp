// 9_���۷���4.cpp
// 45page.. ���� �߿��մϴ�. �ݵ�� ���� �ؾ� �մϴ�.

struct Rect
{
	int left, top, right, bottom;
};

//void f1(Rect r) // call by value : ���� ���� �ȵ�
				// => ������ ���纻 ������ ���� ������尡 �ִ�

//void f1(Rect& r)	// call by reference: ���纻 ����.
					// �޸� ������� ����.					
					// �Ǽ��� ������ �����ɼ��� �ִ�.

void f1(const Rect& r) // C++���� ���� �θ� ����ϴ� 
						// �ڵ�!!
{
//	r.right = 100; // error. ��� ���� �̹Ƿ�
}

int main()
{
	Rect rc = { 1,1,10,10 };

	// f1�� ���� rc�� ���¸� �����ϸ� �ȵȴ�.
	f1(rc);	
}