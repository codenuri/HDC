// 9_���۷���4-2

// �ٽ� 1. call by value �� �׻� ���纻�� �����մϴ�.

// �ٽ� 2. ����� ���� Ÿ��(struct �Ǵ� class) �� �Ϲ�������
//        ũ�Ⱑ Ů�ϴ�. 

// �ٽ� 3. ����� ���� Ÿ���� �Լ����� �������� 
//		  call by value ��� call by reference ����ϼ���

void f1(int n) {}

//void f2(Rect r) {}
//void f2(Rect& r) {} // r�� ����ؼ� ���� ���� ����
void f2(const Rect& r) {} // r�� ����ؼ� ���� ���� �ȵ�
						  // �����ϴ� �ڵ尡 �ִٸ� ����.

int main()
{
	int x = 10;
	f1(x);

	Rect rc = { 1,1,10,10 };
	f2(rc);
}
