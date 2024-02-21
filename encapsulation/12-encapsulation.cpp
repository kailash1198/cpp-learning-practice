#include <iostream>
using namespace std;

// Develop a class called Car with private member variables for the make, model, and year of manufacture. Implement public member functions to set and get these attributes, display the details of the car, and check if it is a vintage car (manufactured more than 50 years ago).

class car
{
private:
    string make;
    int model;
    int year;

public:
void setData(string a, int b, int c){
    make = a;
    model = b;
    year = c;
}

string getMake(){
    return make;
}

int getModel(){
    return model;
}

int getYear(){
    return year;
}

void displayData(){
    cout<<"Car Make : "<<make<<endl;
    cout<<"Car Model : "<<model<<endl;
    cout<<"Car year : "<<year<<endl;
}

void vintageCheck(){
    int currentYear=2023;
    if(year>1973){
        cout<<"This is vintage car"<<endl;
    }
}

};



int main(void)
{
    car carOne;
    carOne.setData("Tata", 2020, 2023);
    carOne.displayData();
    carOne.vintageCheck();
}