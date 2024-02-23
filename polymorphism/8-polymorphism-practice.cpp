#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void print()
    {
        cout << "This is base print" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void print()
    {
        cout << "This is derived class calling" << endl;
    }
};

class derivedTwo: public baseClass{
    public:
       void print()
    {
        cout << "This is derived two class calling" << endl;
    }
};

int main(void)
{

    derivedClass derivedObj;
    derivedTwo derivedTwoObj;
    baseClass *baseObj[2];
    baseObj[0] = &derivedObj;
    baseObj[1] = &derivedTwoObj;
    baseObj[0]->print();
    baseObj[1]->print();
}