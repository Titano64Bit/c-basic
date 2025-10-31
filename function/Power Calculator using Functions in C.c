// This program calculates the power of a number using a custom function.
// It takes a base and an exponent from the user and computes base^exponent using a for loop.
#include <stdio.h>
int power(int b,int exp);
int main ()
{
    int b,exp,re;
    printf("Enter the base number:");
    scanf("%d",&b);
    printf("\nEnter the exponent:");
    scanf("%d",&exp);
    re = power(b,exp);
    printf("the result is:%d",re);
    return 0;
}

int power(int b,int exp)
{
    int result,counter;
    result = b;
    for (counter = 1; counter < exp ; counter ++ )
    {
        result = result*b;
    }
    return result;
}
