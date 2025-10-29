//reads day, month, year and checks if the date is valid
//using logical operators and leap year conditions
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int d,m,y,x,leap;
    printf("Enter the date:\n");
    printf("day (1-31):");
    scanf("%d",&d);
    printf("month (1-12):");
    scanf("%d",&m);
    printf("year (4 digits):");
    scanf("%d",&y);

    x = abs(y);

    if (y%4== 0 && (y%100 != 0) ) {
        leap = 1;}

    else if (y%400 == 0) {
        leap = 1;
    }
    else 
        leap = 0;

    if ((x < 999 || x > 9999) && (m <= 0 || m > 12) && (d <= 0 || d > 31 ))
        printf("-error date not valid");
    else if (leap == 0 && m == 2 && d > 28)
        printf("-error date not valid");
    else {
            switch (m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (d > 0 && d <= 31)
                     printf("This date have the correct format!");
                else 
                     printf("-error date not valid");
            break;

            case 4:
            case 6:
            case 9:
            case 11:
                if (d > 0 && d <= 30)
                     printf("This date have the correct format!");
                else 
                     printf("-error date not valid");
            break; 

            case 2:
                if (leap == 1 && d > 0 && d <= 29) {
                printf("This date have the correct format!");
                }
            else if (leap == 0 && d > 0 && d <= 28) {
                printf("This date have the correct format!");
            }
                else { 
                     printf("-error date not valid");
            }
            break;
            
        }
    }

return 0;
}
