#include <iostream>

class Counter
{
	int count = 0;
public:
	Counter& increment()
	{
		++count;
		return *this;
	}
	int get_count() const { return count; }

	~Counter() { std::cout << "~Counter" << std::endl; }
};
int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();

	std::cout << "-----------------" << std::endl;
	c.increment().increment().increment();
	std::cout << "-----------------" << std::endl;

	std::cout << c.get_count() << std::endl;
}