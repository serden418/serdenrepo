#include <stdio.h>
#include <math.h>
int main()
{
	int num1,num2,sum=0;
	int i;
	scanf ("%d %d",&num1,&num2);

	if (fabs(num1) < fabs(num2))
	{
		for (i=0;i<fabs(num2);i++)
			sum += num1;
	}
	else
	{
		for (i=0;i<fabs(num1);i++)
			sum += num2;
	}

	printf ("%d  ",sum);
	return 0;
}
