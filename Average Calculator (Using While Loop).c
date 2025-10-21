//my program repeatedly asks the user to enter integer numbers
// It keeps summing all positive numbers and counts how many were entered
// The loop stops when a negative number is entered, and prints the average. :D
#include <stdio.h>
int main ()
{
    int y,cicle,average,sum;
    y=0;
    cicle = 0;
    sum = 0;

    while ( y >= 0)
        {
            printf("Enter the number:");
            scanf("%d",&y);
            if (y > 0)
            {
                sum = sum+y;
                cicle ++;
                average = (sum)/cicle;
            }
            else
                break;
        }
        printf("The average of the number entered is:%d",average);
    return 0;
}