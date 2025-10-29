// Program: Diagonal Matrix Printer
// Reads integer n and prints an n x n grid where the main
// and secondary diagonals are marked with 'O' and all other positions with 'X'.
#include <stdio.h>
int main ()
{
    int n,j,row,sec_d;
    printf("Enter a number:\n");
    scanf("%d",&n);
    sec_d = n+1;

    for (row = 1; row <= n; row++)
        {
            for (j = 1; j <= n; j++)
                {
                    if (row == j)
                        printf("O");
                    else if (j+row == sec_d)
                        printf("O");
                    else 
                        printf("X");
                }
            printf("\n");
        }
    return 0;
}