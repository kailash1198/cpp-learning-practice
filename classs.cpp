#include <iostream>
using namespace std;

// class myClassOne
// {
// public:
//     string userName;
//     string userPassword;
// };


class room{
    public:
        double width;
        double length;
        double height;
        double calculateArea(){
            return length*width;
        };
        double calculateVolume(){
            return length*width*height;
        };
};
int main(void)
{
    room room1, room2;
    room1.length = 20;
    room1.width = 15;
    room1.height = 10;
    cout<<"The area of room1 is="<<room1.calculateArea()<<endl;
    cout<<"The volume of room1 is="<<room1.calculateVolume()<<endl;

    room2.length = 30;
    room2.width = 20;
    room2.height = 15;
    cout<<"The area of room2 is = "<<room2.calculateArea()<<endl;
    cout<<"The volume of room2 is = "<<room2.calculateVolume()<<endl;
}