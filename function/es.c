// This program reads three integers, displays them in a formatted table,
// calculates their average and determines the largest value using functions.
#include <stdio.h>
int max_of(int a,int b,int c);
float average(int a, int b, int c);
int main ()
{
    int a,b,c,mx;
    float avg;
    printf("Enter number one:");
    scanf("%d",&a);
    printf("Enter number two:");
    scanf("%d",&b);
    printf("Enter number three:");
    scanf("%d",&c);

    avg = average(a,b,c);
    mx = max_of(a,b,c);

    printf("number:\tvalue:\n");
    printf("1\t%d\n",a);
    printf("2\t%d\n",b);
    printf("3\t%d\n",c);
    
    printf("average= %f\n",avg);
    printf("larger number= %d\n",mx);
    return 0;
}
float average(int a, int b, int c)
{
    float average;
    average = (a+b+c)/3;
    return average;
}
int max_of(int a,int b,int c)
{
    int max; 
    max = 0;
    if (a > b)
    {
         if (a > c)
            max = a;
            else 
                max = c;
    }
    else if (b > c)
    {
        max = b;
    }
    return max;
}