#include<stdio.h>
int main()
{
   int intial, final, increment_or_decrement;
   int fahr;
   printf("%s %s\n", "faharenhient" , "celcius");
   for (fahr = intial; fahr >= final; fahr = fahr - increment_or_decrement)
   
{
    printf("input the intial value \n");
        scanf("%d",&intial);

        printf("input the final value\n");
        scanf("%d",&final);

         printf("input the decrement or increment\n");
         scanf("%d",&increment_or_decrement);
    printf("%d %d\n", fahr, 5.0*(fahr - 32.0)/9.0);
   }
}
