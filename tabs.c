#include <stdio.h>

int main ()
{
    int c , nl;
     nl = 0;
     int bb = 0;
    while ((c =getchar()) != EOF)
        if (c == ' ')
            ++nl;
            printf("%d blanks\n", nl); 

            if ( c == '\t')   
                 ++bb;
                 printf("%d tabs\n");
}
