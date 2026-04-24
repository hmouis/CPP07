#ifndef Array_hpp
#define Array_hpp

#include <iostream>

template <typename T>
class Array{
    private:
        unsigned int _size;
        T *arr;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array& operator=(const Array &other);
        T& operator[](unsigned int i);
        const T& operator[](unsigned int i) const;
        ~Array();        
        unsigned int size();
};


#include "Array.tpp"

#endif