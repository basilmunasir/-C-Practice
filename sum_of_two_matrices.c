#include<stdio.h>
int main()
{
	int i,j,row,col,trace=0;
	printf("Enter no.of rows : ");
	scanf("%d",&row);
	printf("Enter no.of columns : ");
	scanf("%d",&col);
	int matrix1[row][col],matrix2[row][col],sum[row][col];
	printf("Enter %d elements of first matrix: ",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("Enter %d elements of second matrix: ",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			if(i==j)
			{
				trace+=sum[i][j];
			}
		}
	}
	printf("Sum of the two matrices: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",sum[i][j]);
			
		}
		printf("\n");
	}
	if(row==col)
	{
		printf("\nTrace = %d ",trace);
	}
	else
	{
		printf("\nIt doesn't have a trace,bcz it is not a square matrix");
	}
	return 0;
}
	
