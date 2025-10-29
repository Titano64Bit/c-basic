// This program prompts the user for a positive integer 'n' and prints a number pyramid pattern.
// Each row i displays numbers from 1 up to i using nested for loops.
#include <stdio.h>
int main ()
{
    int n,row,i;
    do
    {
        printf("Enter a number:\t");
        scanf("%d",&n);
    } while (n <= 0);
    printf("output:\n");
    for (row = 1; row <= n; row++)
    {
        for (i = 1; i <= row; i++)
            printf("%d ",i);
        
        printf("\n");
    }
    return 0;
}