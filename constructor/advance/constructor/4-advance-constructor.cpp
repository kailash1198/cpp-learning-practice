#include <iostream>
using namespace std;

class myClass
{
private:
    string userName;

public:
    // way-01

    //  explicit myClass(string a)
    //  {
    //      userName = a;
    //      cout<<userName<<endl;
    //  }

    // way-02
    explicit myClass(string a) : userName(a)
    {
        cout << userName << endl;
    }
};

void funcOne(myClass obj)
{
}

int main(void)
{
    myClass nameOne("kailash");

    // funcOne(10); // error, becuase you cannot convert implicit
}