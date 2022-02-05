#include <iostream>
using namespace std;

class Student
{
    public:
        double marks1, marks2;
};

// function that return object of function
Student createStudent()
{
    Student student;

    // Initilize member variable of Student
    student.marks1 = 96.1;
    student.marks2 = 75.1;

    // print member variables of Student
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main()
{
    Student student1;

    // Call function
    student1 = createStudent();

    return 0;
}