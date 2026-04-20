#pragma once

#include <iostream>

template <typename t>
void func(t &e){
    std::cout << "element = " << e << std::endl;
}

template <typename t, typename f>
void iter(t *arr, size_t size, f func)
{
    for (size_t i = 0; i < size; i++)
        func(arr[i]);
}
