#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "�л����� >> ";
	std::cin >> cnt;

	// 3. �Էµ� �л��� ��ŭ �ٽ� ������ �Է� �޾ƾ� �մϴ�.
	//int score[cnt]; // error

	// ����ð��� ������ ũ���� �޸𸮰� �ʿ� �ϸ�
	// => �����޸� �Ҵ� �ۿ� ����.
	int* score = (int*)malloc(sizeof(int) * cnt);
	free(score);

	// C++�� �Ʒ� ó��
	int* score2 = new int[cnt];
	delete[] score2;
}