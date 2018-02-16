#include<iostream>
#include<stdlib.h>
using namespace std;
void* operator new(size_t s)
{
	void* p;
	p=malloc(s);
	return p;
}
void operator delete(void* p)
{
	free(p);
}
int main()
{
int i;
int* x=new int;
*x=5;
delete x;
*x=NULL;
cout<<*x;


}
