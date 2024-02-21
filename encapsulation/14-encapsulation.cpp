// Design a class called Circle with private member variables for radius and constant PI value. Implement public member functions to set and get the radius, calculate the area, and calculate the circumference of the circle.

#include <iostream>
using namespace std;

class circle{
    private:
    int radious;
    int PI;
    public:
    circle(){
        PI = 3.14;
    }

    void setRadious(int a){
        radious = a;
    }
    int getRadious(){
        return radious;
    }

    int calculatedArea(){
        int area = PI*radious*radious;
        return area;
    }

int circumference(){
    int circumfe = 2*PI*radious;
    return circumfe;
}

};

int main(void){
circle one;
one.setRadious(10);
cout<<one.calculatedArea()<<endl;
cout<<one.circumference()<<endl;
    
}