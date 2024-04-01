#include <iostream>
using namespace std;
class bankAccount
{
public:
    virtual void welcomeMessege()
    {
        cout << "Welcome to our dashboard section" << endl;
    }
};

class savingAccount : public bankAccount
{
public:
    virtual void welcomeMessege() override
    {
        cout << "Welcome to our saving account section" << endl;
    }
};

int main(void)
{
    bankAccount *bankAccountPtr;
    bankAccount accountOne;
    savingAccount savAccOne;

    bankAccountPtr = &accountOne;
    bankAccountPtr->welcomeMessege();

    bankAccountPtr = &savAccOne;
    bankAccountPtr->welcomeMessege();
}