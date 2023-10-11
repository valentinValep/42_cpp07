#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(const Array &src): _array(NULL), _size(src._size)
{
	// Copy constructor
	this->_array = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}

template<typename T>
Array<T>::Array(unsigned int n): _array(new T[n]()), _size(n)
{}

template <typename T>
Array<T>::~Array()
{
	// Destructor
	if (this->_array != NULL)
		delete [] this->_array;
	this->_array = NULL;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	if (this == &src)
		return (*this);
	if (this->_array != NULL)
		delete [] this->_array;
	this->_size = src._size;
	this->_array = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
	return (*this);
}

template<typename T>
T &Array<T>::operator[](size_t i) const
{
	if (i >= this->_size)
		throw (Array<T>::OutOfBoundsException());
	return (this->_array[i]);
}

template<typename T>
size_t Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
inline const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return "Array: Out of bounds";
}

template <typename T>
std::ostream	&operator<<(std::ostream &o, const Array<T> &src)
{
	o << "[";
	for (size_t i = 0; i < src.size(); i++)
	{
		o << src[i];
		if (i < src.size() - 1)
			o << ", ";
	}
	o << "]";
	return (o);
}

