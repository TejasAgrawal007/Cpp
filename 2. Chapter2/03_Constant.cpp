#include<iostream>
using namespace std;
int main(){
    const int LIGHT_SPEED = 1235689;
    // LIGHT_SPEED = 250;  // Will throw error cause light_speed is const value 
    cout<<"The Light speed is "<<LIGHT_SPEED;
    return 0;
}