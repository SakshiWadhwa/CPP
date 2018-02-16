#include<stdio.h>

int main(void)
{
	int a1[][7];
	int a2[7][];
	
	int a3[3][4];
	
	int a4[3][] = {2,3,1,5,4,6};
	int a5[][3] = {2,6,7,8,5,3};
	
	printf("%d\n",a1);
	printf("%d\n",a2);
	printf("%d\n",a3);
	printf("%d\n",a4);
	printf("%d\n",a5);
	
}
