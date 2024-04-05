#include <iostream>

// Base case for recursion - print the last argument
void printArgs() {
    std::cout << std::endl;
}

// Recursive function to print arguments
template<typename T, typename... Args>
void printArgs(T first, Args... args) {
    std::cout << first << " ";
    printArgs(args...);
}

int main() {
    printArgs(1, "hello", 3.14, 'a');
    return 0;
}
