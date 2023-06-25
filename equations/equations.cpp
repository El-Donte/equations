#include <iostream>
#include "equation.h"
#include "linear.h"
#include "quadratic.h"
int main()
{
    linear lin(2, 10);
    quadratic quad(5, 1.2, 3.55);
    std::cout << lin.getroot();
    std::cout << std::endl;
    std::cout << quad.getroot();
}

