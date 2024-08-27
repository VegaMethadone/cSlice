#include <stdio.h>
#include "slice.h"



int main()  {
    printf("%s\n", "Program is working!");

    Slice *current = initSlice(5);
    
    current = appendSlice(current, "Hello");
    printf("Current slice buffer: %s\n", current->buffer);

    current = appendSlice(current, ", ");
    printf("Current slice buffer: %s\n", current->buffer);

    current = appendSlice(current, "world!");
    printf("Current slice buffer: %s\n", current->buffer);

    current = initSlice(0);
    current = appendSlice(current, "Hello");
    printf("Current slice2 buffer: %s\n", current->buffer);

    current = appendSlice(current, ", ");
    printf("Current slice2 buffer: %s\n", current->buffer);

    current = appendSlice(current, "world2!");
    printf("Current slice2 buffer: %s\n", current->buffer);

    return 0;
}