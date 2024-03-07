#include "header-file-one.h"
#include "header-file-two.h"
#include "header-file-two.h" //You get error because this header file you include multiple times. SO thats why we need Include guards for overcome this types of error in our program.
// Now above code dublicate and headerfiletwo.h inside include guard are use so now you cannot get error when you use multiple times.

#include <iostream>

// Include Guards - When you use header files multiple time then you got error so overcome this error then we have to use include guards/header guard/file guard/macro guards.

// When we use include guards then compiler will ensure that i have to process this files only one time. Its no matter how many times included. Compilor only process one time.

// ▶️ We use **preprocessor** for use include guard in our program
//  1. #ifndef - this is check macro true or false - if true then executed and if false then #define create macro then executed.
//  2. #define - Followed by #ifndef
//  3. #endif - End of the condition

// This is works just like if else statement

int main(void)
{
    // headerFileOneClass objOne;
    // objOne.display();
    headerFileTwoClass objTwo;
    objTwo.display(); // You cannot get error bacause in header files include guard are use.
}