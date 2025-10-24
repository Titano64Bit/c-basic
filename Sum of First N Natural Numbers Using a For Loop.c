//ask for positive integer
//validates the input and then uses the loop to sum natural number from 1 to n
#include <stdio.h>
int main ()
{
    int n,sum,i;
    sum = 0;
    n = 0;
    while (n <= 0)
    {
        printf("Enter a positive integer:\n");
        scanf("%d",&n);
    }
        for (i = 1; i <= n; i++)
        {
            sum = sum+i;
        }
    printf("the sum from (1-%d) is %d\n",n,sum);
    return 0;
}