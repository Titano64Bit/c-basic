// This program reads integers from the user until 0 is entered.
// It calculates and displays the maximum and minimum values,
// as well as the sum and average of both positive and negative numbers.
#include <stdio.h>
int main ()
{
    int x,max,min,n_pos,n_neg;
    float avg_neg,avg_pos,sum_pos,sum_neg;
    x=19;
    max = 0;
    min = 0;
    n_pos = 0;
    n_neg = 0;
    avg_neg= 0;
    avg_pos= 0;
    sum_pos= 0;
    sum_neg= 0;

    while (x != 0)
    {
        printf("Enter a number (Enter 0 to stop):\n");
        scanf("%d",&x);

        if ( x > 0)
        {
            n_pos ++;
            sum_pos = sum_pos +x;
            if (x > max)
                max = x;
        }
         else if (x < 0)
            {
                n_neg ++;
                sum_neg = sum_neg +x;
                if (x < min)
                    min = x;
            }
    }
    avg_pos = sum_pos/n_pos;
    avg_neg = sum_neg/n_neg;

    printf("the max number entered is %d while the min is %d\n",max,min);
    printf("the sum of the positive int. is :%f while the average is:%f\n",sum_pos,avg_pos);
    printf("the sum of the negative int. is :%f while the average is:%f\n",sum_neg,avg_neg);
    return 0;
}