//reads hours,minuts and seconds
//and checks if the time format is valid using logical-op
#include <stdio.h>
int main ()
{
    int h,m,s;
    printf("Enter the time (hour,minutes,seconds):\n");
    printf("Hours:\n");
    scanf("%d",&h);
    printf("minutes:\n");
    scanf("%d",&m);
    printf("seconds:\n");
    scanf("%d",&s);

    if ( (h >= 0) && (23 >= h ) && ( m >= 0 ) && ( m <= 59 ) && ( s <= 59 ) && ( s >= 0) ) 
        printf("this time is in the correct format!\n");
        else 
            printf("-error");
    return 0;
}