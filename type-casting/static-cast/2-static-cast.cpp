#include <iostream>
using namespace std;

struct stu_data
{
    string stu_name;
    string stu_location;
    int stu_class;
};

struct emp_data
{
    string emp_name;
    string emp_address;
    int emp_id;
};

int main()
{
    stu_data stuOne;
    emp_data empOne;

    static_cast<empOne>(stuOne); // because you cannot convert structure user defined data types
    return 0;
}