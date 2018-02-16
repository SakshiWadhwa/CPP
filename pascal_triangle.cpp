#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++) 
		{
			if((i==j) || (j==0))
			   a[i][j] = 1;
			else
			   a[i][j] = a[i-1][j-1] + a[i-1][j];
			   printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
