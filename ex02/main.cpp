#include "Array.hpp"
#include <iostream>

int main( void )
{
	int	*a = new int[2]();
	std::cout << *a << std::endl;
	std::cout << a[1] << std::endl;
	delete[] a;
}