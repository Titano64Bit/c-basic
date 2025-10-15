//Triangle area calculator, practicing with logical validation of conditions
#include <stdio.h>
int main ()
{
    int b,h,area;

    printf("Enter the base of the desired triangle:\n");
    scanf("%d",&b);
    printf("Enter the height of the desired triangle:\n");
    scanf("%d",&h);

    if (b < 0 || h < 0)
        printf("error - distance cannot negative");
        else 
        {
            area = (b*h)/2;
            printf("Area=%d",area);
        }







    return 0;
}