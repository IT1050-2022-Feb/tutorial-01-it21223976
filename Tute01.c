/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int sub[2], i, total;

  for (i = 0; i < 2; i++)
  {
    printf ("Enter Subject %d mark : ", i + 1);
    scanf ("%d", &sub[i]);
    total = total + sub[i];
  }

  printf ("The average is :%.2f", total / 2.0);
  
  return 0;
}


