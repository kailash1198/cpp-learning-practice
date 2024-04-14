#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{

    std::vector<int> numberList = {1, 2, 3, 4, 5};

    numberList.erase(std::remove(numberList.begin(), numberList.end(), 3), numberList.end());

    for (int number : numberList)
    {
        std::cout << number << std::endl;
    }
    return 0;
}