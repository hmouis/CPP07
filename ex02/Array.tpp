#include "Array.hpp"

template <typename T>
Array<T>::Array():arr(0), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n):_size(n)
{
    if (!_size)
        return ;
    arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other)
{
    _size = other._size;
    if (!_size)
        return ;
    arr = new T[_size]();
    for (unsigned int i = 0; i < _size; i++)
        arr[i] = other.arr[i];
}

template <typename T>
unsigned int Array<T>::size(){ return size;};

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;
    _size = other._size;
    if (!_size)
        return *this;
    arr = new T[_size]();
    for (size_t i = 0; i < _size; i++)
        arr[i] = other.arr[i];
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw std::out_of_range("Invalid index");
    return arr[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= _size)
        throw std::out_of_range("Invalid index");
    return arr[i];
}

template <typename T>
Array<T>::~Array()
{
    if (arr)
        delete[] arr;
}