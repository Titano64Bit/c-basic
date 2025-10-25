// my program asks the user for a set of integers and uses a for loop
// to calculate the average of only the positive numbers entered
#include <stdio.h>
int main ()
{
    int number,i,x,npositive;
    float average,sum;
    average = 0;
    sum = 0;
    npositive = 1;
    printf("How many number will you enter?\n");
    scanf("%d",&number);

    for (i = 1; i <= number; i++)
    {
        printf("Enter number %d:\t",i);
        scanf("%d",&x);
        if (x > 0)
            {
            sum = sum+x;
            average = sum/npositive;
            npositive ++;
            }
    }
    printf("Average of positive number: %f",average);
    return 0;
}