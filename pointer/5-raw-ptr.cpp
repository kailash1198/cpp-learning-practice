#include <iostream>
#include <memory>
//Raw pointer - A raw pointer is a pointer that points to an object in memory.
// Raw pointers do not manage the lifetime of the object they point to.
// This means that the programmer must manually delete the object when it is no longer needed.
int main(void){
int *ptr = new int(100);
std::cout<<*ptr;
delete ptr; //delete manually by programmer, this is raw pointer.
}