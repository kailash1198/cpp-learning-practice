#include <iostream>
using namespace std;

template <class userType>
class baseClass
{
private:
    userType userInputOne;
    userType userInputTwo;

public:
    baseClass(userType a, userType b)
    {
        userInputOne = a;
        userInputTwo = b;

        cout << userInputOne << endl;
        cout << userInputTwo << endl;
    }
};

int main()
{
    baseClass<int> objOne(1,2);
    baseClass<string> objTwo("Kailash", "Kumar");
    return 0;
}