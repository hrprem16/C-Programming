#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<6;i++){     //No. of Rows
		for(j=0;j<=i;j++){  //No. of Columns
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
