// 1. C++17 �������� ����
// 2. include ���丮 ����. nana ����Ǭ ������ include
// 3. ���̺귯�� �̸� �������߰�
//    => ������Ʈ �Ӽ� => ��ũ => �Է� ���� "nana_v143_Debug_x64.lib" �߰�

// 4. ���̺귯���� �ִ� ���丮�� ������ �߰�
#include <nana/gui.hpp>
#include <iostream>

void foo()
{
	std::cout << "click" << std::endl;
}

int main()
{
	nana::form fm;

	
	fm.show();
	
	fm.events().click(foo); // ���콺 Ŭ���ϸ�
							// foo �Լ� ȣ���ش޶�.

	nana::exec(); // �������� ���� ����� �̺�Ʈ�� ó���� �޶�.
}