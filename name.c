#include <stdio.h>

int main ()
{
   int name;
   printf("input your full names please\n");
   while ((name = getchar()) != EOF)
   {
putchar(name); 
   }
}
