#include <stdio.h>
#include "arraylib.h"
//"#Cp"
int main(void)
{
    int a[] = {3, 1, 4, 1, 5};
    int n = 5;
    displayArray(a, n);
    printf("Max at index %d\n", findMaxIndex(a, n));
    reverseArray(a, n);
    displayArray(a, n);
    return 0;
}