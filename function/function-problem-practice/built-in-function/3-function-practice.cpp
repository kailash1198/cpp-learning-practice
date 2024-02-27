#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{

    // file creation
    ofstream myFile("data.csv");
    // wrting to file
    int n;
    myFile << "Sl No, Name, Address" << endl;
    cout << "How many data you want enter";
    cin >> n;

    int *slNo = new int(n);
    string *userName = new string(n);
    // string *userAddress = new string();
    for (int i = 0; i < n; i++)
    {
        cin >> slNo[i];
    }
}