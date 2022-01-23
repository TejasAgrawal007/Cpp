#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {19, 10, 8, 17, 9};

    // Change 4th element to 9
    marks[3] = 7;


    // Accessing the element
    // cout<<marks[0];

    // Change The Fourth element to 9
    for (int i = 0; i <= 4; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}