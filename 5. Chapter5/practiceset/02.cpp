// Demostatrate The Do-while Loop using Continue statement.

#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    // Do while execution
    do
    {
        if (i == 3)
        {
            // Skip the iteration
            i = i + 1;
            continue;
        }
        cout << "The Value of i is " << i << endl;
        i = i + 1;
    } while (i <= 10);
    return 0;
}