#include "Array.hpp"
#include <iostream>

int main( void )
{
	Array<int> a(5);
	Array<int> b(a);
	Array<int> c;
	c = a;

	a[0] = 1;

	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "c:" << c << std::endl;

	c = a;
	std::cout << "c:" << c << std::endl;

	try
	{
		std::cout << a[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << a.size() << std::endl;
}