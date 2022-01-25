#include <iostream>
using namespace std;
int main()
{
    int numbers[2][3];

    cout << "Enter 6 Numbers: " << endl;

    // Storing user input in the array.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> numbers[i][j];
        }
    }

    cout << "The Numbers are: " << endl;

    // Printing array element.s

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
        }
    }

    return 0;
}