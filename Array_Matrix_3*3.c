#include<stdio.h>
main()
{
	int mat[3][3],i=0,j=0,sum1=0,sum2=0;
	int *x=&i,*y=&j;
	printf("\nEnter numbers for elements of matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("-Element[%d],[%d] : ",i,j);
			scanf("%d",&mat[*x][*y]);
		}
	}
	printf("\nThe Matrix is :\n");
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[*x][*y]);
		}
		printf("\n");
	}
	sum1= mat[0][0] + mat[1][1] + mat[2][2];
	printf("\nThe sum of elements from left to right diagonal = %d\n",sum1);
	sum2= mat[0][2] + mat[1][1] + mat[2][0];
	printf("\nThe sum of elements from right to left diagonal = %d\n",sum2);
}
