#include<iostream>
using namespace std;
class a{
	public:
		a()
		{
			cout<<"a";
		}
};
class b:virtual public a{
	public:
		b()
		
		{
			cout<<"b";
		}
};
class c:virtual public a{
	public:
		c()
		
		{
			cout<<"c";
		}
};
class d:public b,public c{
	public:
		d()
		{
			cout<<"d";
		}
};
int main()
{
	d obj;
}
