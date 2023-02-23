#include <iostream>

class Window
{
public:
	void event_handler() // event_handler(Window* this)
	{
		mouse_click();   // this->mouse_click();
	}

	// �Ʒ� �Լ��� virtual �̾�� ����� �����ϴ� ������ �˾� �μ���
	virtual void mouse_click() { std::cout << "window click" << std::endl; }
	virtual void keydown() {}
};


class MainWindow : public Window
{
public:
	void mouse_click() { std::cout << "mainwindow click" << std::endl; }
};
int main()
{
	MainWindow w;
	w.event_handler(); // event_handler(&w)
}