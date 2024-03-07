#include "external-namespace/namespace-one.h" //access namespace from external files
#include "external-namespace/namespace-two.h"
#include <iostream>
// Namespace structing codebase

int main(void)
{
    // groupOne::funcOne();
    // groupOne::funcTwo();

    groupOneFromNamespaceTwo::funcOne();
    groupOneFromNamespaceTwo::funcTwo();
}