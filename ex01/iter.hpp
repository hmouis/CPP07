#pragma once

#include <iostream>

template <typename t>
void f(t &e){
    std::cout << "element = " << e << std::endl;
}

template <typename t>
void cf(t const &e){
    std::cout << "const element = " << e << std::endl;
}

template <typename t>
void iter(t *arr, size_t size, void (*f)(t&))
{
    for (size_t i = 0; i < size; i++)
        f(arr[i]);
}

template <typename t>
void iter(t *arr, size_t size, void (*cf)(const t&))
{
    for (size_t i = 0; i < size; i++)
        cf(arr[i]);
}
