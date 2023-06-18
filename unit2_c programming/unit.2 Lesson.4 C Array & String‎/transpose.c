#include<stdio.h>
int main ()
{
    int rows , columns , i , j;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	printf("Enter number of columns: ");
	scanf("%d",&columns);

	int matrix[rows][columns] , transMatrix[columns][rows];

	printf("Enter elements of matrix :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<columns ; j++)
		{
			printf("Enter a%d%d:",i+1,j+1);
			scanf("%d",&matrix[i][j]);
			transMatrix[j][i] = matrix[i][j];
		}
	}

	printf("Transpose of the Matrix:\n");
	for(i=0 ; i<columns ; i++)
	{
		for(j=0 ; j<rows ; j++)
		{
			printf("%d ",transMatrix[i][j]);
		}
		printf("\n");
	}
}