#include <stdio.h>

// �Ŀ�����Ʈ ���� ���α׷��� ������ ���ô�.

// 1. �ʿ��� Ÿ��(����)�� ���� �����մϴ�.
struct _Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
typedef struct _Rect Rect;

//-----------------------
// 2. ���� �ʿ��� ��� Ÿ��(����)�� ���������Ƿ�
//    �ʿ��� �Լ��� ���� �մϴ�.
//void draw_rect( Rect r )	// ����ü�� ������ ������ �޸𸮻�뷮����
void draw_rect(const Rect* r)		// �׷��� �����ͷ�!
{
//	r->left = 100;
	printf("%d, %d, %d, %d\n", r->left, r->top,
						   	   r->right, r->bottom);

	printf("���ڰ��� ����ؼ� draw rect\n");
}

int main()
{
	Rect rc = { 1, 1, 10, 10 };

	draw_rect(&rc);
}