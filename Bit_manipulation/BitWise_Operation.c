#include <stdio.h>


long long convertDecimalToBinary(int n);

int main()
{

    int num1=0 , num2 =0;

    long long b_num1=0,b_num2=0;

    int d_num1LeftShiftResult =0;

    long long b_num1ComplmentResult=0;
    long long b_num2ComplmentResult=0;
    long long b_num1AndNum2Result = 0;
    long long b_num1ORNum2Result = 0;
    long long b_num1ExORNum2Result = 0;
    long long b_num1LeftShiftResult =0;
   

    printf("Enter an Integer: ");
    scanf("%d", &num1);

    printf("Enter another Integer: ");
    scanf("%d", &num2);

    b_num1 = convertDecimalToBinary(num1);
    b_num2 = convertDecimalToBinary(num2);

    b_num1ComplmentResult = convertDecimalToBinary(~num1);
    b_num2ComplmentResult = convertDecimalToBinary(~num2);


    b_num1AndNum2Result = convertDecimalToBinary(num1 & num2);

    b_num1ORNum2Result  = convertDecimalToBinary(num1 | num2);

    b_num1ExORNum2Result   =    convertDecimalToBinary(num1 ^ num2);

    d_num1LeftShiftResult = num1 << 2;

    b_num1LeftShiftResult = convertDecimalToBinary(d_num1LeftShiftResult);



    printf("The Result of Applying the ~ operator on number %d (%lld) is : %lld \n", num1, b_num1,b_num1ComplmentResult);
    printf("The Result of Applying the ~ operator on number %d (%lld) is : %lld \n", num2, b_num2,b_num2ComplmentResult);
    printf("The Result of Applying the & operator on number %d (%lld) and number %d (%lld) is :(%lld) \n", num1, b_num1,num2,b_num2,b_num1AndNum2Result);
    printf("The Result of Applying the | operator on number %d (%lld) or number %d (%lld) is :(%lld) \n", num1, b_num1,num2,b_num2,b_num1ORNum2Result);
    printf("The Result of Applying the ^ operator on number %d (%lld) xor number %d (%lld) is :(%lld) \n", num1, b_num1,num2,b_num2,b_num1ExORNum2Result);
    printf("The Result of Applying the left shift operator << on number &d (%lld) by 2 places is number %d (%lld) \n ", num1 , b_num1 , d_num1LeftShiftResult ,b_num1LeftShiftResult );


    return 0;
}



long long convertDecimalToBinary(int n)
{
    long long binaryNumber =0;
    int reminder , i=1;


    while(n != 0)
    {
        reminder = n%2;

        n = n/2;

        binaryNumber += reminder * i;
        i = i * 10;
    }

    return binaryNumber;
}