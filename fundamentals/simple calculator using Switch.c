//The goal is to program a basic calculator using switch statements.
#include <stdio.h>
int main ()
{
    int x,y,r;
    char op;

    printf("choose the first number x:\n");
    scanf("%d",&x);

    printf("choose the second number y:\n");
    scanf("%d",&y);

    printf("choose the operator (-,+,*,/):\n");
    scanf("%c",&op);
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        r = x+y;
        printf("result=%d\n",r);
        break;
    case '-':
        r = x-y;
        printf("result=%d\n",r);
        break;
    case '*':   
        r = x*y;
        printf("result=%d\n",r);
        break;
    case '/':
        r = x/y;
        printf("result=%d\n",r);
        break;
    default:
        printf("Error non valid operator:\n");
    }
    return 0;
}