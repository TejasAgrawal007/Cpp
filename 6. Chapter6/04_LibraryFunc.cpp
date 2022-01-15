// Program to Find the Square Root of a Number

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double number, squareRoot;

    number = 25;

    // Sqrt() is an Library function to calculate the squre root.
    squareRoot = sqrt(number);

    cout << "The Square root of " << number << " = " << squareRoot;

    return 0;
}