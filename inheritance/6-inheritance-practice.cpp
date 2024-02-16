#include <iostream>
using namespace std;

class mainTeam
{
private:
    string teamName;
    int teamCode;

public:
    mainTeam()
    {
        cout << "Example : Kailash Team" << endl;
        cout << "Team code : 123" << endl;
    }
    void teamDetails()
    {
        cout << "Team Name : ";
        cin >> teamName;
        cout << "Team Code : ";
        cin >> teamCode;
    }

    void displayDetails()
    {
        cout << "Team Name : " << teamName << endl;
        cout << "Team Code : " << teamCode << endl;
    }
};

class cricketTeam : public mainTeam
{
public:
    cricketTeam()
    {
        cout << "This is cricketTeam constructor" << endl;
    }
    void cricket()
    {
        cout << "This is cricket team" << endl;
    }
    ~cricketTeam()
    {
        cout << "CricketTeam destroy" << endl;
    };
};

class footBallTeam : public cricketTeam
{
public:
    void football()
    {
        cout << "This is football team" << endl;
    }
};

int main(void)
{

    footBallTeam obj1;
    // obj1.teamDetails();
    // obj1.displayDetails();

    cricketTeam obj2;
}