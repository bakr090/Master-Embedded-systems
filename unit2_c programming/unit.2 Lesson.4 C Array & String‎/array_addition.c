#include<stdio.h>
int main()
{
    float a[2][2],b[2][2],c[2][2];
    int i,j;

    printf("enter the element of 1st matrix :\n");
    for (i=0;i<2;++i)
    {
        for (j=0;j<2;++j)
        {
            printf("enter a%d%d:",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }

    printf("enter the element of 2st matrix :\n");
    for (i=0;i<2;++i)
    {
        for (j=0;j<2;++j)
        {
            printf("enter b%d%d:",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }

    for (i=0;i<2;++i)
    {
        for (j=0;j<2;++j)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n sum of matrix:\n");
    for (i=0;i<2;++i)
    {
        for (j=0;j<2;++j)
        {
            printf("%.1f\t",c[i][j]);
            if (j==1)
            printf("\n");
        }
    }

}