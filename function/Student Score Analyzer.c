//
#include <stdio.h>
float average_score(int a,int b,int c,int d,int e);
int max_and_min(int a,int b,int c,int d,int e);
int number_of_passing(int a,int b,int c,int d,int e);

int main ()
{
    int a,b,c,d,e,max,pass_score,ok;
    float average;
    ok = 0;
    do 
    {
        printf("Enter test score 1:");
        scanf("%d",&a);
        printf("Enter test score 2:");
        scanf("%d",&b);
        printf("Enter test score 3:");
        scanf("%d",&c);
        printf("Enter test score 4:");
        scanf("%d",&d);
        printf("Enter test score 5:");
        scanf("%d",&e);
        if (a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= 0 && c <= 100 && d >= 0 && d <= 100 && e >= 0 && e <= 100)
        ok = 1;
        else
        printf("Error: all scores must be between 0 and 100\n");

    }
    while ((ok) == 0);

    average = average_score(a,b,c,d,e);
    max = max_and_min(a,b,c,d,e);
    pass_score = number_of_passing(a,b,c,d,e);

    printf("test\tscore\n");
    printf("1\t%d\n",a);
    printf("2\t%d\n",b);
    printf("3\t%d\n",c);
    printf("4\t%d\n",d);
    printf("5\t%d\n",e);
    printf("--------------\n");
    printf("average score:%f\n",average);
    printf("top score: %d\n",max);
    printf("number of student that have passed: %d\n",pass_score);
    return 0;
}
float average_score(int a,int b,int c,int d,int e)
{
    float average;
    average = (a+b+c+d+e)/5.0;
    return average;
}
int number_of_passing(int a,int b,int c,int d,int e)
{
    int n;
    n = 0;
    if (a >= 60)
        n++;
    if (b >= 60)
        n++;
    if (c >= 60)
        n++;
    if (d >= 60)
        n++;
    if (e >= 60)
        n++;
    return n;
}

int max_and_min(int a,int b,int c,int d,int e)
{
    int max;
    max = a;
    if (b > max) 
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    if (e > max)
        max = e;

    return max;
}