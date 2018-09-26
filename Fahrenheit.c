#include <stdio.h>
/* Fahrenheit- Clesius table */
int main (void)
{ 
   int fahr=1;
 
   
  while (fahr<=300)
   {
       fahr++;
        printf(" f- %3d c - %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
   }
}

