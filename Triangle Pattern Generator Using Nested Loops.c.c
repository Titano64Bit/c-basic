// Program that prints either a normal or inverted triangle made of '*' characters.
// Input is validated to ensure positive integers and correct mode selection.
#include <stdio.h>
int main ()
{
    int n,type,dot,row;
    n=-1;
    type = 0;
    while (n < 0 || n > 200)
    {
    printf("Enter a number:\n");
    scanf("%d",&n);
        if (n < 0)
            printf("number must be positive\n");
    }
    while (type != 1 && type !=2)
    {
    printf("great! now:\n Enter 1 (normal triangle)\n Enter 2 (inverted triangle)\n");
    scanf("%d",&type);
    }
switch (type)
{
    case 1:
    {
            for (row = 0; row <= n; row++)
            {
                for (dot = 0; dot < row; dot++)
                {
                    printf("*");
                }
                printf("\n");
            }
        break;
    }
    case 2:
    {
        for (row = n; row >= 0; row--)
            {
                for (dot=0; dot <= row; dot++)
                {
                    printf("*");
                }
                printf("\n");
            }
    }       
}
    return 0;
}