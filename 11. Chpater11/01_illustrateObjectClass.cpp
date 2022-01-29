#include<iostream>
using namespace std;

// Create a Class 
class Room{

    public:
        double length;
        double breadth;
        double height;

        double calculateArea(){
            return length * breadth;
        }

        double calculateVolume(){
            return length * breadth * height;
        }
};



int main(){

    // Create Object of Room Class
    Room room1;

    // Assign value to data memebers
    room1.length = 45.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // Calculate and display the area and volume of the room
    cout<<"Area of Room = "<<room1.calculateArea()<<endl;
    cout<<"Area of Room = "<<room1.calculateVolume()<<endl;
    
    return 0;
}