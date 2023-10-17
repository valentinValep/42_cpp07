#include "iter.hpp"
#include <iostream>

#define TAB_SIZE 5

void	print(int const &i)
{
	std::cout << i << std::endl;
}

int main( void )
{
	int	tab[TAB_SIZE];

	for (int i = 0; i < TAB_SIZE; i++)
		tab[i] = TAB_SIZE - i;

	std::cout << "Printing tab with iter and function print:" << std::endl;
	iter(tab, TAB_SIZE, print);
	std::cout << std::endl << "Printing tab with iter and function print2:" << std::endl;
	iter(tab, TAB_SIZE, print2<int>);
}