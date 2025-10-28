// This program generates a multiplication table
// It validates the user input and prints the results in a formatted grid using nested loops.
#include <stdio.h>
int main ()
{
    int n,ok_value,row,column,table;
    printf("Enter a number:\n");
    scanf("%d",&n);
    ok_value = (n > 0 && n <= 10);

    if (ok_value)
    {
        for (row = 1; row <= n; row ++)
        {
            for (column = 1; column <= n; column ++)
            {
                table = column*row;
                printf("%d\t",table);
            }
            printf("\n");
        }
    }
    else 
        printf("error - enter a valid number (1-10)\n");
    return 0;
}