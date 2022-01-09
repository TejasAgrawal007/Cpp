// C++ Program to Check Whether a character is Vowel or Consonant.


#include<iostream>
using namespace std;
int main(){
    char c;
    bool isLowerCase, isUpperCase;

    cout<<"Enter an Alphabates: ";
    cin>>c;

    isLowerCase  = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUpperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(!isalpha(c)){
        printf("Error! Non alphaNumeric Value");
    }else if(isLowerCase ||  isUpperCase){
        cout<<c<<" is a Vowel ";
    }else{
        cout<<c << " is a constant ";
    }
    return 0;
}