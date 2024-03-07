#include "funcOne.h" //inside this file include guard are use, so when this multiple time then you are not get error because error skip by include guards.
#include "funcOne.h"
#include "funcOne.h"
#include "funcOne.h"
#include "funcOne.h"
#include <iostream>
int main(void)
{
    functionOne();
}