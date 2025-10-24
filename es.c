
// This program takes a positive integer n as input and uses a for loop
// to find and sum all numbers between 1 and n that are divisible by 3.
// It also counts how many of that numbers exist.
#include <stdio.h>
int main ()
{
    int n,sum,counter,divisible,countDiv;
    sum = 0;
    countDiv= 1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if ( n <= 0)
        printf("-error number not valid");
        else if (n > 0) {
            for (counter = 1; counter < n; counter ++)
                {
                divisible = counter%3;
                if (divisible == 0)
                    {
                        sum = counter + sum;
                        countDiv ++;
                    }
                }
        }
    printf("between (1-%d) there are %d numbers divisibile by 3, and the sum of all of them is %d",n,countDiv,sum);
    return 0;
}