#include <iostream>
#include <iomanip>
#include <cmath>

int main() 
{
    float x = 3.0;
    float x_end = 6.0;
    float h = 0.5;
    float y;
    std::cout << std::setw(10) << "x" << std::setw(15) << "Y" << std::endl;
    std::cout << "---------------------------" << std::endl;
    do {
        y = cos(x * x) + pow(sin(x), 2) + 2;
        std::cout << std::setw(10) << x << std::setw(15) << y << std::endl;
        x += h;
    } 
    while (x <= x_end);
    return 0;
}