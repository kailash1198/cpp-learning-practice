#include <iostream>
using namespace std;
class one
{
public:
    void funcOne()
    {
        cout << "This is funcOne" << endl;
    }
};

class two : public one
{
public:
    void funcTwo()
    {
        cout << "This is funcTwo" << endl;
    }
};

class three : public two
{
public:
    void funcThree()
    {
        cout << "This is funcThree" << endl;
    }
};

int main(void)
{
}