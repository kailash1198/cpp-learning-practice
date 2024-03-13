#include <iostream>
using namespace std;
class baseClass
{
public:
    int value;
    baseClass(int num)
    {
        value = num;
    }
};

namespace groupOne
{
    void swap(baseClass &a, baseClass &b)
    {
        int temp = a.value;
        a.value = b.value;
        b.value = temp;
    }
}

int main(void)
{
    baseClass obj1(10), obj2(20);

    cout << "Before ADL : " << endl;
    cout << "Obj1 value = " << obj1.value << endl;
    cout << "Obj2 value = " << obj2.value << endl;

    cout << "After ADL : " << endl;
    swap(obj1, obj2); // ADL
    cout << "Obj1 value = " << obj1.value << endl;
    cout << "Obj2 value = " << obj2.value << endl;
}