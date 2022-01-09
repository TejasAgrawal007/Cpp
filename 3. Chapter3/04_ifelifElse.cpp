#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Your num::\n";
    cin >> num;
    if (num > 0)
    {
        cout << "The Number is Positive";
    }
    else if (num == 0)
    {
        cout << "The Number is Constant";
    }
    else
    {
        cout << "The Given Number is Negative";
    }
    return 0;
}