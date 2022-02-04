// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "Tejas" by creating an object of the class Student.


#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll_no;
};


int main(){

    student s;
    s.name = "Tejas";
    s.roll_no = 3;
    cout<<s.name<<" "<<s.roll_no<<endl;
    
    return 0;
}

