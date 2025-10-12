#include <stdio.h>
#include <stdlib.h>
#define k 3.28084
int main ()
{
    int option;
    float Euros,Dollars,Celsius,Fahrenheit,meters,feet;

    printf("1) euros --> dollars\n2) Celsius --> Fahrenheit\n3) meters --> feet\n4)Exit\n");
    scanf("%d",&option);

    switch (option)
    {
        case 1:
            {
                printf("enter the desired amount in euros:\n");
                scanf("%f",&Euros);
                if (Euros < 0)
                    {
                        printf("error - enter a valid amount\n");
                    }
                else
                {
                Dollars = Euros*1.12;
                printf("%f Euros is equivalent to:%f dollars\n",Euros,Dollars);
                }
            }
        break;
        case 2:
        {
                printf("enter number of degress Celsius:\n");
                scanf("%f",&Celsius);

                Fahrenheit = (Celsius*1.8)+32;
                printf("%f Celsius is equivalent to:%f Fahrenheit\n",Celsius,Fahrenheit);
        }
        break;
        case 3:
        {
                printf("enter number of meters:\n");
                scanf("%f",&meters);

                feet = meters*k;
                printf("%f meters is equivalent to:%f feet\n",meters,feet);
        }
        break;
        case 4:
        {
            exit(0);
        }
        break;
        default:
    }














    return 0;
}