// ����1

// C ǥ�� �Լ� : ��� OS ȯ���� ��� C/C++ �����Ϸ��� ����
//			    ������� printf() ���� � �Լ�
//				GUI �� ����� �Լ��� ����.

// GUI �� ������� : �� OS �����簡 �����ϴ� �Լ��� ����ؼ� ����
// => windows : ����ũ�μ���Ʈ�� ��õ�� �Լ� ����
//			    visual studio ��ġ�� ��밡��
// 
// => OSX : apple ����, xcode ��ġ


#include <stdio.h>	// C/C++ ǥ�� ���
					// ��� OS ȯ���� ��� C/C++ �����Ϸ��� ����

#include <Windows.h> // MS �� �����ϴ� ���!
					// VS ��ġ�ؾ߸� ��밡��

int main()
{
	printf("hello\n");

	MessageBoxA(0, "Hello", "ĸ�ǹ��ڿ�", 0);
			// => �̷� �Լ��� MS ������ "Windows API" ��� �մϴ�.
			//    "Win32 API" ��� �մϴ�.
}



