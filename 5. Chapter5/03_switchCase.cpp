#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter Your Grade::\n";
    cin>>grade;
    switch (grade)
    {
    case 'A':
        cout << "Excellent! " << endl;
        break;

    case 'B':
    case 'C':
        cout << "Well Done! " << endl;
        break;

    case 'D':
        cout << "You Passed! " << endl;
        break;

    case 'F':
        cout << "Better Try Again! " << endl;
        break;

    default:
        cout << "Invalid Grade" << endl;
        break;
    }
    return 0;
}