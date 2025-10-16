/*
The user enters the year, the programme calculates whether it is a leap year or not 
the objective is to practise with logical operators.
*/
#include <stdio.h>
int main ()
{
    int y,c1,c2,c3;
    printf("Enter the year:\n");
    scanf("%d",&y);

    c1 = y%400 == 0;
    c2 = y%4 == 0;
    c3 = y%100 == 0;

    if ((c2 && !c3) || c1)
            {
            printf("%d --> is a leap year",y);
            }
        else 
            printf("%d --> is not a leap year",y);
    return 0;
}