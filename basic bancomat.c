#include <stdio.h>
int main ()
{
    int amount,rest,n50,n20,erogatedamt;
    printf("desired amount of money:\n");
    scanf("%d",&amount);
    n50 = 50;
    n20 = 20; 

    if (amount < 0)
        printf("error - not valid amount!\n");
        else if (amount < 20)
            printf("errore - the desired amount must exeed 20:\n");
                else 
                    {
                        n50 = amount/50;
                        n20 = (amount%50)/20;
                        rest = amount-(n20*20+n50*50);
                        erogatedamt = amount-rest;
                        printf("thanks for using our service --->amount:%d\n50$ bill=%d\n20$ bill=%d\nerogated money=%d\nresto=%d\n",amount,n50,n20,erogatedamt,rest);
                    }
    return 0;
}
