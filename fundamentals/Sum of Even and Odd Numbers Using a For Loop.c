//this program take an integer
//and uses a for loop to calculate separately the sum odd && even
#include <stdio.h>
int main ()
{
    int n,sumeven,sumodd,i;
    i = 0;
    sumeven = 0;
    sumodd = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for (i = 0; i <= n; i++)
    {
        if ( i%2 == 0 )
        sumeven = sumeven+i;
        else if ( i%3 == 0)
        sumodd = sumodd+i;
        else
        sumodd = sumodd+i;
    }
    printf("sum of even number:%d\n",sumeven);
    printf("sum of odd number: %d\n",sumodd);
    return 0;
}