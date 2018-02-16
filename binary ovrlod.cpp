#include<iostream>
using namespace std;
class complex
{int r;
int i;
public:
	complex operator+(complex c2)
	{
		complex c3;
		c3.r=r+c2.r;
		c3.i=i+c2.i;
		return c3;
	}
	 friend void operator>>(istream&,complex&);
	 friend void operator<<(ostream&,complex);
	
};
void operator>>(istream &in, complex &c2)
{
	in>>c2.r>>c2.i;
}
void operator<<(ostream &out, complex c2)
{
	out<<c2.r<<"+i"<<c2.i;
}
int main()
{
	complex c1,c2,c3;
	operator>>(cin,c1);
	operator>>(cin,c2);
	c3=c1+c2;
	cout<<c3;
}

