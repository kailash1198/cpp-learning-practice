#include <iostream>
using namespace std;
// Multilevel inheritance
// class-1
class car
{
public:
    void carFunc()
    {
        cout << "Car class output" << endl;
    }
};

// class-2
class bus : public car
{
public:
    void busFunc()
    {
        cout << "Bus class output" << endl;
    }
};

// class-3

class train : public bus
{
public:
    void trainFunc()
    {
        cout << "Train class output" << endl;
    }
};

int main(void)
{
    train trainObjMultilevel;
    bus busObj;

    trainObjMultilevel.carFunc();
    trainObjMultilevel.busFunc();
    trainObjMultilevel.trainFunc();

    busObj.carFunc();
    busObj.busFunc();
}