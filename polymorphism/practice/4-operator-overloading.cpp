#include <iostream>
using namespace std;

struct studentData
{
    string name;
    int idNumber;

    studentData(string a, int b)
    {
        name = a;
        idNumber = b;
    }
};

void operator<<(ostream& COUT, studentData& studentObj){
    COUT<<"Name : "<<studentObj.name<<endl;
    COUT<<"Id : "<<studentObj.idNumber<<endl;
}


int main()
{
    studentData StudentOne = studentData("Kailash", 10);
    cout<<StudentOne;//to solve this error we have to use operator << overload function

    return 0;
}