#include<stdio.h>
int main()
{
    int Fahr;
for(Fahr = 0; Fahr <= 300; Fahr = Fahr + 20 );
     printf("%3d %6.1f\n" , Fahr , (5.0/9.0)*(Fahr-32) );
     
}

