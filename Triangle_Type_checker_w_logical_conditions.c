//hello, this program reads three sides, checks if they form a valid triangle
//and determines its type using logical operator
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the sides of the triangle:\na:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);

    if ( a>0 && b>0 && c>0 && a < (b+c) && b < (a+c) && c < (a+b))
        {
            if ((a == b) && (b == c)) 
                printf("Equilateral triangle\n");
            else if (a == b || b == c || a == c) 
                printf("Isosclese triangle\n");
            else if ((a == b || b == c || a == c) && ((a*a+b*b) == c*c) )
                printf("Right isosceles triangle\n");
            else if ( (a != b) && (c != a) && (b != c) )
                printf("Scalene triangle\n");
            else if (( (a != b) && (c != a) && (b != c)) && (a*a+b*b) == c*c)
                printf("Right scalene triangle\n");
        }
        else 
            printf("error - not valid number");
    return 0; 
}