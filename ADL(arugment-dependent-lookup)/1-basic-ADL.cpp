#include <iostream>
using namespace std;

// ADL - argument dependent lookup
// This is technique for allow compiler to search function to call as per and based on argument provided

namespace groupOne
{
    class baseClass
    {
    public:
        void funcOne()
        {
            cout << "This is function One" << endl;
        }
    };
};

int main(void)
{
    groupOne::baseClass obj;
    obj.funcOne();
}