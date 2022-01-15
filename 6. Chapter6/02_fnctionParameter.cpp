// program to print Text with paramter

#include<iostream>
using namespace std;

// display a Number
void display(int n1, float n2){
    cout<<"The int Number is "<<n1<<endl;
    cout<<"The Double Number is "<<n2<<endl;
}

int main(){

    int num1 = 5;
    float num2 = 5.5;

    // Calling the function
    display(num1,num2);
    
    return 0;
}