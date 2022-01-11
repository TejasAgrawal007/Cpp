// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum



#include<iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;

    // Taking input from the User
    cout<<"Enter The Number:: ";
    cin>>number;


    while(number >= 0){
        // sum += number;
        sum = sum + number;

        // Take the input Again If The Number is Positive
        cout<<"Enter The Number: ";
        cin>>number;
    }
    // display The Sum
    cout<<"\n The Sum is "<<sum<<endl;

    return 0;
}