#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter a n integer: ");
    scanf("%d",&n);
    printf("factorial of %d =%ld",n,factorial(n));

}
int factorial(int n)
{
    if(n!=1)
    return n*factorial(n-1);
}