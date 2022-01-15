// Example 1: No arguments passed and no return value

#include <iostream>
using namespace std;
void prime();
int main()
{
    // No argument is passed to prime()
    prime();
    return 0;
}

void prime()
{
    int num, i, flag = 0;

    cout << "Enter a Positive Integer enter to check: ";
    cin >> num;

    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << num << " is not a Prime Number. ";
    }
    else
    {
        cout << num << " is a prime Number.";
    }
}