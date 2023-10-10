#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
	T		*_array;
	int		_size;
public:
	Array(); // Default constructor
	Array(const Array &src); // Copy constructor
	Array(unsigned int n);
	~Array(); // Destructor
	Array	&operator=(const Array &src); // Assignment operator

	T		&operator[](int i);
	int		size() const;

	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#include "Array.tpp"
