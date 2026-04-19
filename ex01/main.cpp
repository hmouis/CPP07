#include "iter.hpp"

int main()
{
    std::string sarr[3] = {"hello", "hodaifa", "a"};
    int const iarr[4] = {1, 2, 3, 4};
    
    std::cout << "Testing array of strings \n";
    ::iter(sarr, 3, ::f<std::string>);

    std::cout << "Testing array of const int \n";
    ::iter(iarr, 4, ::cf<int>);
}