#pragma once


#include <iostream>

template <typename t>

void swap(t &a, t &b){
    t c;
    c = a;
    a = b;
    b = c;
}

template <typename t>

t min(t a, t b){
    if (a > b)
        return b;
    return a;
}

template <typename t>

t max(t a, t b){
    if (a < b)
        return b;
    return a;
}
