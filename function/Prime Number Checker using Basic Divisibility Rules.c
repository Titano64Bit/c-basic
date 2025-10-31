// This program determines whether a number is prime by checking divisibility
// against small prime factors (2, 3, 5, and 7). 
// It demonstrates basic logical conditions and function usage in C.
#include <stdio.h>
int int_is_prime(int a);
int main ()
{
    int a,prime;
    printf("Enter a number:\n");
    scanf("%d",&a);
    prime = int_is_prime(a);

    if (prime)
    printf("%d is a prime!\n",a);
        else
            printf("%d is not a prime\n",a);
    return 0;
}
int int_is_prime(int a)
{
    if ((a != 2 && a%2 == 0) || (a != 3 && a%3 == 0) || (a != 5 && a%5 == 0) || (a != 7 && a%7 == 0))
        a = 0;
        else
            a = 1;
    return a;
}
