// Program that finds the largest among three integers using two functions:
#include <stdio.h>
int max_of_two(int a,int b);
int max_of_three(int max1,int c);
int main ()
{
    int a,b,c,max1,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);

    max1 = max_of_two(a,b);
    max= max_of_three(max1,c);

    printf("the larger number is %d",max);

    return 0;
}
    
    int max_of_two(int a,int b)
    {
        int max;
        if (a > b)
            max = a;
            else 
                max = b;
        return max;
    }
    int max_of_three(int max1,int c)
    {
        int max;
            if (max1 > c)
                max = max1;
                else 
                    max = c;
        return max;
    }











