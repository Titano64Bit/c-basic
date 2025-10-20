//  A simple C program that simulates a system health check by evaluating CPU temperature and RAM usage with conditional statements.
// if statement practise 
#include <stdio.h>
int main ()
{
    int cpu,ram;
    printf("Enter CPU temperature:\n");
    scanf("%d",&cpu);

    printf("Enter ram usage:\n");
    scanf("%d",&ram);

    if (cpu <= 30) {
        printf("CPU status: is that even on?\n");
    } else if (cpu <= 70) {
        printf("CPU status: light load\n");
    } else if ( cpu <= 100 ) {
        printf("CPU status: normal usage\n");
    } else if (cpu > 100) {
        printf("Your CPU is cooked\n");
    } 
        else 
        printf("please enter a valid amount:\n");
    if (ram < 40)
        printf("Memory load: Low\n");
    else if (ram <= 70)
        printf("Memory load: Moderate\n");
    else 
        printf("Memory load: Hight\n");

    return 0;
}