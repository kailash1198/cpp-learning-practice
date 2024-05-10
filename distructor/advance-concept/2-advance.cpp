#include <fstream>
#include <iostream>
#include <string>

class file
{
private:
    std::string fileName;     // hold name of the file
    std::ofstream fileStream; // writing data to file

public:
    file(const std::string &file_Name)
    {
        fileName = file_Name;
        fileStream.open(file_Name); // open file

        // check file is open or not
        if (fileStream.is_open())
        {
            std::cout << "File opened successfully : " << file_Name << std::endl;
        }
        else
        {
            std::cerr << "File not open : " << file_Name << std::endl;
        }
    }

    // destructor
    ~file()
    {
        if (fileStream.is_open())
        {
            fileStream.close();
            std::cout << "Now file closed : " << fileName << std::endl;
        }
    }

    // function for write in file
    void writingData(std::string data)
    {
        if (fileStream.is_open())
        {
            fileStream << data;
        }
    }
};

int main()
{
    file myNewFile("test.txt");
    myNewFile.writingData("Kailash Kumar");

    return 0;
}