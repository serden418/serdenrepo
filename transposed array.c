#include <stdio.h>
int main()
{
	int a[3][2]={1,2,3,4,5,6};
	int b[2][3];
	int i,j;
	printf("ORIGINIAL ARRAY \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]);
		}
	printf ("\n");
	}

		
		
	for(i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
			b[i][j]=a[j][i];
	}
		
	
	printf("TRANSPOSED ARRAY \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
	
}
