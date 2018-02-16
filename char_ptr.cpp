#include<stdio.h>
#include<stdlib.h>

void print_array(const char *arr[], size_t s)
{
	int i;
	for(i = 0; i < s; i++)
	printf("%d is %s\n", i, arr[i]);
}

int  main( void )
{
	int i;
	const char *x[] = {"first","second","third"};
	char y[][10] = {"first", "second", "third"};
	
	size_t x_len = sizeof(x) / sizeof(char*);
	size_t y_len = sizeof(y) / sizeof(char);
	
	y[0][0] = 'k';
	x[0] = "changed";
	
	printf("size of x is %u\n", x_len);
	printf("size of y is %u\n", y_len);
	printf("size of y[0] is %u\n", sizeof(y[1]));
	
	print_array(x, x_len);
	
	/*puts("printing y");
	for(i = 0; i < y_len; i++)
	printf("%d is %s\n", i, y[i]);
	
	puts("printing x");
	for(i = 0; i < x_len; i++)
	printf("%d is %s\n", i, y[i]);*/
	
	
}

