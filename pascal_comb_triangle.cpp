#include<stdio.h>
#include<stdlib.h>

unsigned long long int fact(unsigned long long int n)
{
	unsigned long long int t = 1;
	while(n)
	{
		t = t*n--;
	}
	return t;
}
unsigned long long int comb(unsigned long long int n, unsigned long long int r)
{
   unsigned long long	int x = fact(n)/(fact(r)*fact(n-r));
	return x;
}

void pascal(int k)
{
	int rows = 50, cols = 51;
unsigned long long	int i,j;
unsigned long long	int **a = (unsigned long long int**)malloc(rows*sizeof(unsigned long long int*));
	
	for(i = 0; i < rows; i++)
	    a[i] = (unsigned long long int*)malloc(cols*sizeof(unsigned long long int));
	
	
	for(i = 0; i < k; i++)
	{
		for(j = 0; j <= i; j++)
		{
			//a[i][j] = comb(i,j);
			//printf("%llu ", a[i][j]);
			printf("%d ",comb(i,j));
			/*a[j] = comb(i,j);
			printf("%d ",a[j]);*/
		}
		printf("\n");
	}
	free(a);
}

int main()
{
	int k;
	printf("enter num\n");
	scanf("%d", &k);
	pascal(k);
}
