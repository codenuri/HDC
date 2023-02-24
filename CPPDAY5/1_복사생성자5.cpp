#include <vector>
#include <iostream>

// ���� ���縦 ����� swap 
// => �����ϴ�.
template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
// move �� ����� swap : ���� ������ �����մϴ�.
template<typename T>
void swap(T& a, T& b)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}
// ��� 
// � Ÿ���� "���� �޸�"�� ����Ҷ� ( vector ��)
// => �Ϲ������δ� ���� ���縦 �����ѵ�,
// => �׷���, swap ���� �˰��� �ۼ��ÿ��� move �� 
//    �����ϴ�.
/*
// C++
vector v2 = v1; // ���� ����
vector v2 = std::move(v1); // �ڿ� �̵�

// Rust
vector v2 = v1; // �ڿ� �̵�
vector v2 = v1.clone(); // ���� ����
*/
// �Ʒ� 2���� ������ �չ��Դϴ�. �ƹ��ϵ� ���� �ʽ��ϴ�.
// free(0);
// delete 0;

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5 };	
	std::vector<int> v2 = { 6,7,8,9,10 };

	swap(v1, v2);
	
	

}