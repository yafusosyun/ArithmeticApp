#include <iostream>
#include "plus_minus.h"
#include "mul_div.h"

int main()
{
    std::cout << add(10, 5) << std::endl;
    std::cout << sub(10, 5) << std::endl;
    std::cout << mul(10, 5) << std::endl;
    std::cout << divi(10, 5) << std::endl;

    return 0;
}
