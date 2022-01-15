// program to add two numbers using a function

#include <iostream>
using namespace std;

// declearing a function
int add(int a, int b)
{
    return (a + b);
}

int main()
{

    int sum;

    // Calling a function and Storing a value

    sum = add(100, 5);

    cout << "The Sum of 100 + 5 is  = " << sum << endl;

    return 0;
}