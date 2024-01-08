#include <stdio.h>

int main ()
{
   long cn;
   cn = 0;
    while (getchar() != EOF)
        ++cn;
        printf(" there are %d characters in the input\n", cn);
}
