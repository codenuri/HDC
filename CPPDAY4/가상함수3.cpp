#include <iostream>

class Window
{
public:
	void event_handler()
	{
		// �߻��� �̺�Ʈ�� �����ؼ� ��ӵ� �Լ� ȣ��
		mouse_click();
	}
	void mouse_click() {std::cout << "window click" << std::endl;}
	void keydown() {}
};

class MainWindow : public Window
{
public:
	void mouse_click() { std::cout << "mainwindow click" << std::endl; }
};
int main()
{
	MainWindow w;
	w.event_handler();
}