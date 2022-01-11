/*
 C++ Program to print numbers from 1 to 5
    Syntex - 
        do{
            // body of loop
        }while(conditions)
*/


#include<iostream>
using namespace std;
int main(){
    int i = 1;

    do{
        cout<<i<<" ";
        ++i;
    }while(i <= 5);
    return 0;
}