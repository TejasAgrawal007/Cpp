// C++ program to calculate the average marks of two students


#include<iostream>
using namespace std;

class Student{
    public:
        double marks;

        // Constructor to initilize a marks
        Student(double m){
            marks = m;
        }
};

// Function that has object as a Parameter
void calculateAvarage(Student s1, Student s2){

    // Calculate the avarage of marks of m1 and m2
    double avarage = (s1.marks, s2.marks) / 2;

    cout<<"Avarage Marks = "<<avarage<<endl;
}


int main(){

    Student student1(88.0) , student2(56.0);

    // Passing the object as argument
    calculateAvarage(student1,student2);
    
    return 0;
}