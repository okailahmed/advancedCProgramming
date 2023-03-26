#include <stdio.h>




int main()
{
    int num = 123;
    
    int *singlePointer = NULL;

    int **doublePointer = NULL;

    singlePointer = &num;

    doublePointer = &singlePointer;

    //to print values with different ways 

    printf("\n value of Num is : %d", num );
    printf("\n value of Num using singlPointer  is : %d", *singlePointer );
    printf("\n value of Num using doublepointer is  : %d", **doublePointer);

    //to print address of different values 

    printf("\n adddress of Num is : %p", &num );
    printf("\n adddress of Num using singlPointer  is : %p", singlePointer );
    printf("\n adddress of Num using doublepointer is  : %p", *doublePointer);

    //to print value of pointers 

    printf("\n value  of  singlPointer  is : %d", *singlePointer );
    printf("\n value  of  doublepointer is  : %d", **doublePointer);

    //to print address of pointers
    printf("\n address  of  singlPointer  is : %p", &singlePointer );
    printf("\n address  of  doublepointer is  : %p", &doublePointer);

    return 0;
}
