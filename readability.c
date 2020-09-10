#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
   string para = get_string("Enter a paragraph\n");
   int letters=0,words=1,sentences=0;
   int n=strlen(para);
   for(int i=0;i<n;i++)
   {
       if(isalpha(para[i]))      //letter count
       {
           letters++;
       }

      else if(para[i]==' ')  //word count
      {
          words++;
      }
      else if((para[i]=='.')||(para[i]=='!')||para[i]=='?')      //sentence count
      {
         sentences++;
      }
   }

   printf("\nNo of letters: %i\n",letters);
   printf("No of words: %i\n",words);
   printf("No of sentences: %i\n",sentences);

   int L=0,S=0;
   L=(100*letters)/words;
   S=(100*sentences)/words;

   int index = 0.0588 * L - 0.296 * S - 15.8;
   unsigned int grade = index;

   if(index<1)
   {
      printf("Before Grade 1\n");
   }

   else if(index>16)
   {
      printf("Grade: 16+\n");
   }

   else
   {
     printf("Grade: %i\n",grade);
   }

}