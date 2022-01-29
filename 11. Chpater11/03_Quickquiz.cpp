#include <iostream>
using namespace std;

class mindspace
{
    // Access specifier
public:
    // Data Member
    string coaching;

    // Member function
    void printName()
    {
        cout << "Coaching name is = " << coaching;
    }
};

int main()
{

    // Declearing an Object
    mindspace mind;

    mind.coaching = "MindSpace The Best Classes";

    mind.printName();

    return 0;
}