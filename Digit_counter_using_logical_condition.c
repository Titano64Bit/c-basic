//read an inter and print how digit it has
//using logical op for range checking
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x,y;
    printf("Enter The Number:\n");
    scanf("%d",&x);
    y = abs(x);
        if (y < 10)
        printf("the number consists of 1 digit\n");
            else if (y < 99 && y >= 10)
            printf("the number consists of 2 digits\n");
                else if (y < 999 && y >= 100)
                    printf("the number consists of 3 digits\n");
                        else
                            printf("the number consists of more than 3 digits\n");
    return 0;
}