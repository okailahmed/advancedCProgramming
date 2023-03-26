#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr)
{

    *ptr = (int *)malloc(sizeof(int)); // allocate some memory
}

void simpleoperationdoublePointer()
{
    int num = 123;

    int *singlePointer = NULL;

    int **doublePointer = NULL;

    singlePointer = &num;

    doublePointer = &singlePointer;

    // to print values with different ways

    printf("\n value of Num is : %d", num);
    printf("\n value of Num using singlPointer  is : %d", *singlePointer);
    printf("\n value of Num using doublepointer is  : %d", **doublePointer);

    // to print address of different values

    printf("\n adddress of Num is : %p", &num);
    printf("\n adddress of Num using singlPointer  is : %p", singlePointer);
    printf("\n adddress of Num using doublepointer is  : %p", *doublePointer);

    // to print value of pointers

    printf("\n value  of  singlPointer  is : %d", *singlePointer);
    printf("\n value  of  doublepointer is  : %d", **doublePointer);

    // to print address of pointers
    printf("\n address  of  singlPointer  is : %p", &singlePointer);
    printf("\n address  of  doublepointer is  : %p", &doublePointer);
}

int main()
{
    int *ptr = NULL;
    
    allocateMemory(&ptr);

    *ptr = 20;

    printf("%d \n ", *ptr);


    free(ptr);
    return 0;
}
