// Check Whether Number is Even or Odd using ternary operators

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter The Number::\n";
    cin >> num;

    (num % 2 == 0) ? cout << " is Even." : cout << " is Odd";
    return 0;
}