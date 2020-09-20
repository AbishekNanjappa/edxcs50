#include<stdio.h>
#include<cs50.h>


int main(void)
{
    float n;
    do
    {
        n = get_float("Change owed: ");
    }while(n<=-1);

    float amount = n*100;
    int count=0;
    while(amount > 0)
    {
        if(amount>=25)
        {
            amount = amount-25;
            count++;
        }

        else if((amount<25) && (amount>=10))
        {
            amount = amount-10;
            count++;
        }

        else if((amount<10) && (amount>=5))
        {
            amount = amount-5;
            count++;
        }

        else
        {
            amount = amount-1;
            count++;
        }


    }

    printf("Coins: %i",count);
    printf("\n");
}
