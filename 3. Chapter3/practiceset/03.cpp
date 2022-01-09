// Program to Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3;
    cout << "Enter Three Number: \n";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        cout << "Largerst number is: " << n1;
    }
    if (n2 >= n1 && n2 >= n3)
    {
        cout << "Largest Number is: " << n2;
    }
    if (n3 >= n1 && n3 >= n2)
    {
        cout << "Largest Number is: " << n3;
    }
    return 0;
}