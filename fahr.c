#include<stdio.h>
int main()
{
   int fahr;
    int celc;
     int upper,lower,step;
 upper = 300;
 lower = 0;
 step = 20;
 celc = lower;
 while(celc <= upper)
 {
    fahr = 9*(celc*32*5)/5;
    printf("%d %d\n", fahr, celc);
    celc = celc + step;
 }
}