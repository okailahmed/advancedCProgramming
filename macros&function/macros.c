#include <stdio.h>


//one line macro
#define PI 3.14

//multi line macros
#define PRNT(a,b) \
    printf("value 1 = %d",a);\
    printf("value b = %d",b);


main()
{
    int x=3;
    int y=5;

    PRNT(x,y);

    printf("PI is = %d",PI);


    return 0;
}
