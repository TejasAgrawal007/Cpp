// Sizeof

#include <iostream>
using namespace std;

class Base
{
    int a;
};
int main()
{

    Base b;
    cout << "The size of B is: " << sizeof(b) << endl;
    return 0;
}