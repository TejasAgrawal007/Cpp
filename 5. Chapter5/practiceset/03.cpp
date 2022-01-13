// Program to build a simple calculator using switch Statement


#include<iostream>
using namespace std;
int main(){
    char opera;
    float num1, num2;
    cout<<"Enter The Operator (+,-, *, /):: ";
    cin>>opera;
    cout<<"Enter Two numbers: "<<endl;
    cin>>num1>>num2;

    switch (opera)
    {
    case '+':
        cout<<num1 << " + " <<num2 << " = " <<num1 + num2;
        break;

    case '-':
        cout<<num1 << " - " <<num2 << " = " <<num1 - num2;
        break;

    case '*':
        cout<<num1 << " * " <<num2 << " = " <<num1 * num2;
        break;

    case '/':
        cout<<num1 << " / " <<num2 << " = " <<num1 / num2;
        break;
    
    default:
        cout<<"The Operator Dosen't Exits (+ - * /)";
        break;
    }


    return 0;
}