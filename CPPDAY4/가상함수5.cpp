#include <iostream>

// CRTP
// => �Ļ� Ŭ���� ���鶧 ��� Ŭ�������� �ڽ��� �̸��� �˷��ִ� ���
// => �����Լ��� ������� �ʰ�, �����Լ�ó�� �����ϰ� �ϴ� ���

// ���ۿ��� "C++ IDioms" �˻� �� 1��° ��ũ ����


template<typename T>
class Window
{
public:
	void event_handler() // event_handler(Window* this)
	{
//		mouse_click();   // this->mouse_click();
		((T*)this)->mouse_click();
	}

	void mouse_click() { std::cout << "window click" << std::endl; }
	void keydown() {}
};


class MainWindow : public Window <MainWindow >
{
public:
	void mouse_click() { std::cout << "mainwindow click" << std::endl; }
};
int main()
{
	MainWindow w;
	w.event_handler(); // event_handler(&w)
}