// Calculate the area of Rectangle

#include<iostream>
using namespace std;
int main(){
   int length, bredth, area;
   cout<<"program for Area of Rectangle\n";

   cout<<"Enter The Length of Rectangle:\t";
   cin>>length;

   cout<<"Enter The bredth of Rectangle:\t";
   cin>>bredth;


   // Calculating a area 
   area = length * bredth;
   cout<<"The area of Rectangle is "<<area;

   return 0;
}