#include <iostream>
class studentData
{
private:
    std::string student_name;
    std::string student_address;
    int student_class;
    int student_code;

public:
    studentData(std::string name, std::string address, int a, int b)
    {
        student_name = name;
        student_address = address;
        student_class = a;
        student_code = b;
    }

    void displayData()
    {
        std::cout << student_name << std::endl;
        std::cout << student_address << std::endl;
        std::cout << student_class << std::endl;
        std::cout << student_code << std::endl;
    }

    ~studentData()
    {
        std::cout << "Now momory released" << std::endl;
    }
};

int main()
{
    studentData batch_one("kailash", "bangalore", 12, 100);
    batch_one.displayData();

    return 0;
}