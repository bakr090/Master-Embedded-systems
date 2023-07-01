#include<stdio.h>
int power (int num,int topower);
int main()
{
    int num,topower;
    printf("enter the base number");
    scanf("%d",&num);

    printf("enter the power number ");
    scanf("%d",&topower);

    printf("%d^%d = %d",num,topower,power(num,topower));

}
int power (int num,int topower)
{
    if(topower==0)
        return 1;
    else if (topower==1)
        return num;
    else 
        return (num*power(num,topower-1));
}