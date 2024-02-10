#include <iostream>
#include <string>
using namespace std;

class company
{
public:
    virtual void companyDetails() = 0;
    virtual void companyDataShow() = 0;
};

class google : public company
{
public:
    string cName;
    string cAddress;
    void companyDetails()
    {
        cout << "Please enter comapny name: ";
        cin >> cName;
        cout << "Please enter comapny address: ";
        cin >> cAddress;
    }

    void companyDataShow()
    {
        cout << "Comapany Name: " << cName << endl;
        cout << "Company Address:  " << cAddress << endl;
    }
};

int main(void)
{
    company *cmpPtr;
    cmpPtr = new google();

    cmpPtr->companyDetails();
    cmpPtr->companyDataShow();
}