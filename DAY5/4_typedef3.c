// 4_typedef3.c

// typedef �� �ؼ��ϴ� ��Ȯ�� ���
// => ������ �ڸ��� �ִ� �ɺ��� Ÿ������ �ش޶�.!
/*
int n;		// n �� ����

double d;

int x[10];

int f(int, int);
*/
//-------------------------------
typedef int n;	
typedef double d;
typedef int x[10];

typedef int f(int, int);

int main()
{
	n a; // int a

	x arr = { 1,2,3 }; // int arr[10]


	f f1; // int f1(int, int) ��� �Լ� ����
}