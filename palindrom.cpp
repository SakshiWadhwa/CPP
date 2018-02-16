#include<iostream>
#include<string.h>
using namespace std;
void palindrom()
{
	char a[100],b[100];
	cin>>a;
	strcpy(b,a);
	strrev(b);
if(strcmp(a,b)==0)
cout<<"palindrom";
else
cout<<"not";
}
int main()
{
char a[100],c[100];
char*b=new char;
*b=palindrom();
cin>>a;
strcpy(c,a);
strrev(c);
if(strcmp(a,c)==0)
printf("yess");
else
printf("no");
	
}
