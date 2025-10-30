// Program that calculates the factorial of a user-entered number using a custom function.
// Includes input validation (range 0–33) and an iterative approach for computing the factorial.
#include <stdio.h>
int factorial(int x);
int main ()
{
    int x,result;
    do 
    {
    printf("Enter the number:");
    scanf("%d",&x);
        if (x < 0)
            printf("-error number must be positive\n");
            else if (x > 33)
                printf("-error number too large\n");
    } 
    while (x < 0 && x <= 33);

    result = factorial(x);
    printf("\nresult=%d",result);
    return 0;
}
int factorial(int x)
{
    int i,f;
    f = 1;
    for (i = 1; i <= x; i++)
    {
        f = i*f;
    }
    return f;
}
