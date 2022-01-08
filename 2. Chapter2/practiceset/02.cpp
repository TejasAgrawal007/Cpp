// Calculate the cpp program to calculate the simple Interest

#include <iostream>
using namespace std;
int main()
{
  // Declar a variables
  float p, t, r, interest;

  // Take a Input
  cout << "Enter the Principle amout, time and rate: ";
  cin >> p >> t >> r;

  // Calculate interest
  interest = (p * t * r) / 100;

  // display Output
  cout << "Your Interest is = " << interest << endl;
  return 0;
}