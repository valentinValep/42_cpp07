#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
	T		*_array;
	size_t	_size;
public:
	Array(); // Default constructor
	Array(const Array &src); // Copy constructor
	Array(unsigned int n);
	~Array(); // Destructor
	Array	&operator=(const Array &src); // Assignment operator

	T		&operator[](size_t i) const;
	size_t	size() const;

	class OutOfBoundsException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, const Array<T> &src);

#include "Array.tpp"
