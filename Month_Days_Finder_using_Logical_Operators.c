// This program reads a month number (1–12) from user input
// and prints the number of days in that month.
// But it uses logical operators to determine the correct month group

#include <stdio.h>
int main ()
{
    int m;
    printf("Enter the month number:\n");
    scanf("%d",&m);

    if (m == 2)
        {
            printf("the selected month has 28 days");
        }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("the selected month has 30 days");
        } 
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||m == 12)
        {
            printf("the selected month has 31 days");
        } 
        else 
        {
            printf("error - number not valid");
        }
    return 0;
}
