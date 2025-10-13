#include <stdio.h>
//shorth programm with the aim of using switch grouping
int main ()
{
    int n;
    printf("enter the number of the selected month (1-12):\n");
    scanf("%d",&n);

switch (n)
{
    case 2:
    {
        printf("the selected month has 28 days\n");
    }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    {
        printf("the selected month has 30 days\n");
    }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        printf("the selected month has 31 days\n");
    }
        break;
    default: 
        printf("Invalid month number\n");
        break;
}
    return 0;
}