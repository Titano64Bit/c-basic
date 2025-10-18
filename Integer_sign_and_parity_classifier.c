//
#include <stdio.h>
int main ()
{
    int x,even;
    printf("Enter a number:\n");
    scanf("%d",&x);

    even = x%2; 
    if (x > 0 && even == 0)
      printf("the number %d is positive and even\n",x);
    if (x > 0 && even == 1) 
    printf("the number %d is positive and odd\n",x);
    if (x == 0)
    printf("the number is 0");
    if (x < 0 && even == 0)
    printf("the number %d is negative and even\n",x);
    if (x < 0 && even != 0)
    printf("the number %d is negative and odd\n",x);
    return 0;
}
