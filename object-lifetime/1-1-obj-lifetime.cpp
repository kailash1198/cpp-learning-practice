#include <iostream>
#include <string>
// Object Lifetime - During code periods time - When object created and when object destroyed
//         ▶️ Three types of Object there in C++
// 1. Local Object - Created when function call and Destroy when function return.
// 2. Global Object - Created When program start and destroy when program ends.
// 3. Dynamic Object - Created when use new operator and destroyed when use delete operator.

//           ▶️ There are also 4 types of Object lifetime :
// 1️⃣1. Static storage duration - Created when program start and destroyed when program end
// We always use static keyword for defined static object duration
int global_var = 200;
class baseClass
{
    static int static_variable;
};

void funcOne()
{
    static int static_Local;
}
// 2️⃣2. Thread storage duration - Created when thread start and destroyed when thread ened. We use thread_local keyword for define thread storage.
//When you declare a variable with thread_local, it means that each thread will have its own copy of that variable.
thread_local int numOne = 1;
// 3️⃣ 3. Automatuc storage duration
void funcTwo()
{
    int userCode; // automatic storage class
}
// 4️⃣4. Dynamic storage duration - new and delete operator

// local object code
int sumFunc(int a, int b)
{
    int c = a + b;
    return c;
};

void greet()
{
    std::cout << "Welcome to code";
}

// Global Object Code
int number = 100; // this program start when code start and end when program end.

int main(void)
{
    // Local object
    sumFunc(10, 20); // When this function call at calling time object are created and after that function procced and return value or something then object are destroyed. Note one thing we do not need to depend on function return value that means if function work are done then object also destroyed.
    greet();

    // Dynamic Object
    int *userRoom;
    userRoom = new int(100); // object created

    std::cout << *userRoom;
    delete userRoom; // object destroyed
}