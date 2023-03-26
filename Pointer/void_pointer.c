#include <stdio.h>







int main()
{
    int i=0;

    float f = 2.34;

    char ch = 'k';


    void *vptr = NULL;     // declare void pointer 

    // i can assign any other type to thsi void pointer 

    vptr = &i; 

    // to print this pointer we need to cast it 

    printf("Values of i = %d \n", *(int *)vptr);

    //and the same for other types 

    vptr = &f; 

    printf("Values of f = %d \n", *(float *)vptr);

    vptr = &ch; 
    printf("Values of ch = %d \n", *(char *)vptr);

    return 0;

}