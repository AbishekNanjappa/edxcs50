#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    n=get_int("Height: ");
    do
    {
      printf("Enter a height between 1 and 8:\n");
      break;
    }while(n<1||n>8);

    if(n>=1&&n<=8)
    {
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<n-1-i;j++)
             {
                printf(" ");
             }
             for(int j=n;j>n-i-1;j--)
             {
                 printf("#");
             }
            printf("\n");
          }

    }
}