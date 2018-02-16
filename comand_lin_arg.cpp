#include<stdio.h>

int main( int  argc, char* argv[])
{
   printf("total argument: %d\n", argc);
   
   int i;
   for(i = 0; i < argc; i++ )
   printf("argument %d is %s\n",i, argv[i]);	
}

