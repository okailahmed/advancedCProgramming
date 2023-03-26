#include <stdio.h>




int main()
{
    int num, postion, newNum, bitStatus;

    printf("Enter any number :");

    scanf("%d", &num);


    printf("Enter nth bit to check and set (0-31) : ");

    scanf("%d", &postion);

    bitStatus = (num >> postion) & 1;
    printf("the %d bit is set to %d \n", postion , bitStatus);


    newNum = (1<< postion) | num;

    printf("\n Bit set successfully. \n\n");



    return 0;
}