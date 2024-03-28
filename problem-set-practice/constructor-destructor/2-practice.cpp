#include <iostream>
using namespace std;
// Implement a class representing a bank account with constructors and a destructor.
class bankAccount
{
private:
    long int account_number;
    string holder_name;

public:
    bankAccount(long int a, string b)
    {
        account_number = a;
        holder_name = b;
    }

    ~bankAccount()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main(void)
{
    bankAccount accountOne(1234, "Kailash"), accountTwo(5678, "Aryan");
}