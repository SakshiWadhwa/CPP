#include<iostream>
using namespace std;
class vol
{int a;
int r,h,l,b;
public:

int volume(int a)
{
	return(a*a*a);
}
int volume(int r,int h)
{
	return(3.14*r*r*h);
}
int volume(int l,int b,int h)
{
	return(l*b*h);
}
};
int main()
{vol a,b,c;
	cout<<a.volume(10)<<endl;
	cout<<b.volume(2,4)<<endl;
	cout<<c.volume(10,2,30)<<endl;
}
