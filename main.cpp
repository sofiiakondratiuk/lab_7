#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    float x = 3.0;
    float x_end = 6.0;
    float h = 0.5;
    float y;
    cout << setw(10) << "x" << setw(15) << "Y" << endl;
    cout << "---------------------------" << endl;
    do {
        y = cos(x * x) + pow(sin(x), 2) + 2;
        cout << setw(10) << x << setw(15) << y << endl;
        x += h;
    } 
    while (x <= x_end);
    return 0;
}