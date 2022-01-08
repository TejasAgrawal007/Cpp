// Find The Avarage of Three Numbers

#include<iostream>
using namespace std;
int main(){
  double num1, num2, num3;
  double sum, average;

  // Take a Input from the user
  cout<<"Enter The Three Number :: ";
  cin>> num1 >> num2 >> num3;


  // Calculate the value
  sum = num1 + num2 + num3;

  // Avarage the value
  average = sum / 3;

  // Disply The Output
  cout<< "The Sum of Three Number is "<<sum <<endl;
  cout<<"The Avarage of three number is "<<average <<endl;
};

