#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

long long convertDecimalToBinary(int n);

int main()
{
    long long Bin_num, binary_result;

    int decimal_result = 0, Dec_num;

    printf("Enter a binary number : ");

    scanf("%lld", &Bin_num);

    decimal_result = convertBinaryToDecimal(Bin_num);

    printf("%lld in binary =  %d in decimal ", Bin_num, decimal_result);
    101printf("\n");
    // this code to convert binary to decimal
    printf("Enter a Decimal number : ");

    scanf("%d", &Dec_num);

    binary_result = convertDecimalToBinary(Dec_num);


    printf("%d in Decimal =  %lld in Binary ", Dec_num, binary_result);

    return 0;
}

int convertBinaryToDecimal(long long n)
{

    int decimalNumber = 0, i = 0, reminder = 0;

    while (n != 0)
    {
        reminder = n % 10;
        n = n / 10;
        decimalNumber += reminder * pow(2, i);
        ++i;
    }
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