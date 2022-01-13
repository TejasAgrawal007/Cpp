// print The Even Number using Continue Statement in for Loop

#include <iostream>
using namespace std;
int main()
{
    int num = 20;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}