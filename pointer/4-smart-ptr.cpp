#include <iostream>
#include <memory>
using namespace std;
// smart pointer - In built library pointer. which is worked at run time (dynamic memory allocation).
// This is overcome of laek memory, becuase the pointer auto delete when memory used.
// 1. unique_ptr;
// 2. shared_ptr;
// 3. weak_ptr;

int main(void)
{
    // unique_ptr<int> ptrOne(new int(10));
    // unique_ptr<int> ptrTwo(ptrOne); //you cannot access ptrOne, because its uniques smart pointer. When u create once then memory automatically realesed.
    // cout<<*ptrOne<<endl;

    // shared_ptr<int> ptrOne(new int(10));
    // shared_ptr<int> ptrTwo(ptrOne);
    // cout << *ptrTwo << endl;

    shared_ptr<int> ptr(new int(10));
    weak_ptr<int> ptrOne = (ptr);
    cout<<&ptrOne<<endl;
}