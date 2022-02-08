/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   int mark01,mark02;
   float AVG;
   
   printf("Enter Mark 01:");
   scanf(" %d",&mark01);
   
   printf("Enter Mark 02:");
   scanf(" %d" ,&mark02);
         
         AVG=(mark01 + mark02)/2.0;
         
         printf("Average mark is = %.1f",AVG);

         
  return 0;
}

