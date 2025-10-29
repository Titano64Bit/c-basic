// This program reads 'n' integers and determines how many are positive, negative, or zero.
// It also calculates the sum of positive and negative numbers, and computes the average of the positive ones
#include <stdio.h>
int main ()
{
    int n,x,npositive,nnegative,nzero,i,sumnegative;
    float average,sumpositive;
    average = 0;
    sumnegative = 0;
    sumpositive = 0;
    nnegative = 0;
    npositive = 0;
    nzero = 0;

    printf("How many numbers will you enter?\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
        {
            printf("enter number %d:\t",i);
            scanf("%d",&x);
            if (x > 0)
                {
                    npositive ++;
                    sumpositive = sumpositive + x;
                    average = sumpositive/npositive;

                }
                else if (x < 0)
                    {
                    nnegative ++;
                    sumnegative = sumnegative + x;
                    }
                    else 
                        nzero ++;
        }
        printf("You entered a total of %d numbers of which %d negative, %d positive, and %d zero\n",n,nnegative,npositive,nzero);
        printf("the sum of all the positive interger is: %f\n",sumpositive);
        printf("the sum of all the negative interger is: %d\n",sumnegative);
        printf("while the average of the positive integer entered is:%f\n",average);
    return 0;
}