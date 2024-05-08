#include <iostream>
using namespace std;
class mainClass
{
private:
    int numOne;
    int numTwo;
    bool checkNum;

public:
    mainClass(int a, int b, bool c) : numOne(a), numTwo(b), checkNum(c){};

    bool setNum()
    {
        if (numOne == 10 && numTwo == 10)
        {
            checkNum = true;
        }

        return checkNum;
    }

};

int main()
{
    mainClass objOne(10, 10, false);
    bool resultTest = objOne.setNum();
    cout<<resultTest<<endl;

    return 0;
}