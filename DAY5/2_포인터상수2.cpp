
// read_array(int* p)
// => const �迭�� ������ ����.(C++ ����, C ���)

// read_array(const int* p)
// => non-const �Ϲ� �迭�� �迭�� ��� ������ �ִ�.

// �ٽ� : �迭�� �б⸸ �Ұ��̶�� "const Ÿ��*" �� �������� 


//void read_array(int* p, int sz)
void read_array(const int* p, int sz)
{
	// �� �ȿ����� ���ڷ� ���޵� �迭�� �б⸸ �մϴ�.
	int n = p[0];
}

int main()
{
	      int x[3] = { 1,2,3 }; // R/W ����
	const int y[3] = { 1,2,3 }; // Read �� ����.

	read_array(x, 3);
	read_array(y, 3);
}