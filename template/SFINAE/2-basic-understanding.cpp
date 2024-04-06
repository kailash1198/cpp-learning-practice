#include <iostream>
using namespace std;
// SFINAE example and you can see how this works

template <typename userType>
userType funcOne(userType a)
{
    userType b = a + 10;
    return b;
};

int main()
{
    // Here compiler not give you error, SFINAE are occur
    string result = funcOne("kailash");
    cout << result << endl;
    return 0;
}