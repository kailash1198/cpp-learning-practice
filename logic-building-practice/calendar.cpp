#include <iostream>

using namespace std;
// logic problem statement - Write a program to display a calendar for a given month and year.
void janMonth()
{
    char weekDayCode[7] = {'M', 'T', 'W', 'T', 'F', 'S', 'S'};
    int startDate = 01;
    int endDate = 07;
    for (int i = 0; i < 7; i++)
    {
        cout << weekDayCode[i] << "    ";
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = startDate; j <= endDate; j++)
        {
            cout << j << "    ";
        }
        cout << endl;
        cout << endl;

        startDate += 7;
        endDate += 7;
    }
    for (int i = 29; i <= 31; i++)
    {
        cout << i << "    ";
    }
    cout << endl;
    cout << endl;
}

int main(void)
{
    string month;
    cout << "\t\tCalendar" << endl
         << endl;
    cout << "Enter month : ";
    cin >> month;

    if (month == "jan")
    {
        cout << endl
             << endl;
        cout << "-------- January 2024 -------" << endl
             << endl;
        ;
        janMonth();
    }
    // janMonth();
}