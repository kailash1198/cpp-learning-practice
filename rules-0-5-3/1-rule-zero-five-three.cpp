#include <iostream>
using namespace std;
// Rules of zero, five and Three - This rules is used for object resources and manage proper resources.

// Rules of Zero - This rules for state that if class or structure does not explicitly manage resources. It should not defined special member function, then compiler automatic define these function.and behaviour will be correct for managing resources like Memory and File handles.

// Example of Rules of Zero
struct myResource
{
    string userName;
    int value;
};

// Rule of Three - This rule state class or structure that manage resource should not defined the following three special member function :
// 1. Destructor
// 2. Copy constructor
// 3. Copy assignment Operator

// Example of Rules of Three
class myResource
{
private:
    int *data;

public:
    // Constructor and destructor
    myResource()
    {
        data = new int(100);
    }
    ~myResource()
    {
        delete data;
    }
    // Copy constructor
    myResource(const myResource &other) : data(new int[100])
    {
        std::copy(other.data, other.data + 100, data);
    }

    // Copy assignment operator
    myResource &operator=(const myResource &other)
    {
        if (&other == this)
        {
            return *this;
        }
        std::copy(other.data, other.data + 100, data);
        return *this;
    }
};

// Rules of Five -This is extended rules of Rules of Three. 2 more additional member function included-
// 1. Move constructor
// 2. Move assignment operator

// Example of Rules of Five
class MyResource
{
public:
    // Constructors and destructor
    MyResource() : data(new int[100]) {}
    ~MyResource() { delete[] data; }

    // Copy constructor
    MyResource(const MyResource &other) : data(new int[100])
    {
        std::copy(other.data, other.data + 100, data);
    }

    // Copy assignment operator
    MyResource &operator=(const MyResource &other)
    {
        if (&other == this)
        {
            return *this;
        }
        std::copy(other.data, other.data + 100, data);
        return *this;
    }

    // Move constructor
    MyResource(MyResource &&other) noexcept : data(other.data)
    {
        other.data = nullptr;
    }

    // Move assignment operator
    MyResource &operator=(MyResource &&other) noexcept
    {
        if (&other == this)
        {
            return *this;
        }
        delete[] data;
        data = other.data;
        other.data = nullptr;
        return *this;
    }

private:
    int *data;
};
int main(void)
{
}