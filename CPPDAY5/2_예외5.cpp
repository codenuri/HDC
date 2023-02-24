#include <iostream>

int db_backup()
{
	if (1)
		throw 1;

	return 100;
}
void db_remove() {}

int main()
{
	try
	{
		int ret = db_backup();
		db_remove();
	}
	catch (int e)
	{
		std::cout << "catch.." << std::endl;
	}

	std::cout << "main continue" << std::endl;
}


