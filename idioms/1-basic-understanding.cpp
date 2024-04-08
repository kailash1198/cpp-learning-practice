#include <iostream>
// Idioms - Idioms are not C++ feature this is just coding practice
//  1. RAII - resource Acquisition is Initialization
//  2. Rule of Three
//  3. Rule of five
//  4. PImpl (Pointer to Implementation) Idiom
//  5. Non-Virtual Interface (NVI)

class resource
{
public:
    resource(){};  // Resource are aquired when this constructor created
    ~resource(){}; // Resouce are released when this destructor created
};

// Rule of three
class myClass
{
public:
    myClass();
    myClass(const myClass &obj);            // Rule 1 for create copy constructor
    myClass &operator=(const myClass &obj); // Rule 2 for create copy assignment operator
    ~myClass();                             // Rule 3 for create destructor
};

// Rule of Five
class ruleOfFive
{
public:
    ruleOfFive();
    ruleOfFive(const ruleOfFive &obj);            // Rule 1 Copy constructor
    ruleOfFive(ruleOfFive &&obj);                 // Rule 2 Move constructor
    ruleOfFive &operator=(const ruleOfFive &obj); // Rule 3 Copy assignment Operator
    ruleOfFive &operator=(ruleOfFive &&obj);      // Rule 4 Move asignment operator
    ~ruleOfFive();                                // Rule 5 Destructor
};

int main()
{
    resource obj; // When this object created then object resource acquired
    return 0;
} // Now obj are out of scope -> that means now obj resource released