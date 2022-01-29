#include<iostream>
using namespace std;

class Room{

    private:
        double length;
        double bredth;
        double height;

    public:
        // Function To Initilize the private Variables.
        void intData(double len, double breth, double hgt){
            length = len;
            bredth = breth;
            height = hgt;
        }

        double calculateArea(){
            return  length * bredth;
        }

        double claculateVolume(){
            return length * bredth * height;
        }
};

    
int main(){

    // Create the object of the class
    Room room1;

    // Pass The Value to the private varibles;
    room1.intData(45.2,30.8, 19.2);

    cout<<"Area of Room = "<<room1.calculateArea()<<endl;
    cout<<"Volumn of Room = "<<room1.claculateVolume()<<endl;

    return 0;
}