//This program repeatedly asks the user to enter integer numbers.
// It adds all positive even numbers and stops when the user enters 0.
#include <stdio.h>
int main ()
{
    int x,even,sum;
    x= -1;
    sum = 0;

    while (x != 0)
    {
        printf("Enter a number:\n");
        scanf("%d",&x);
        even = x%2; 

        if ( x > 0 && even == 0 )
        sum = sum+x;
    }
    printf("the sum of all the positive even number entered is:%d",sum);
    return 0;
}