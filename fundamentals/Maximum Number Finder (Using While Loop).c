//
#include <stdio.h>
int main ()
{
    int x,max;
    max = -2147483648;
    x = -1;

    while (x != 0)
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        if (x > max && ( x != 0))
            max = x;
    }
    printf("The highest number entered is:%d",max);
    return 0;
}