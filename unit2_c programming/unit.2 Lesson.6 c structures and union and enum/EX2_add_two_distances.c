#include <stdio.h>
struct distance  
{
   int feet;
   float inches;
}d1,d2,sum;

int main()
{
    printf("enter distance 1 info\n");
    printf("enter feet:");
    scanf("%d",&d1.feet);
    printf("enter inches:");
    scanf("%f",&d1.inches);
    printf("enter distance 2 info\n");
    printf("enter feet:");
    scanf("%d",&d2.feet);
    printf("enter inches:");
    scanf("%f",&d2.inches);
    sum.feet=d1.feet+d2.feet;
    sum.inches=d1.inches+d2.inches;

    printf("\n sum of distances= %d %.2f",sum.feet,sum.inches);

   
    
    
}
