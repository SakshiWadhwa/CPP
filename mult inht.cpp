#include<iostream>
using namespace std;
class a{
	public:
		 a()
		{
			cout<<"inside constructor a"<<endl;
		}
	virtual	~ a()
		{
			cout<<"inside destructor a"<<endl;
		}
};
class b:public a{
	public:
	b()
		{
			cout<<"inside constructor b"<<endl;
		}
		~b()
		{
			cout<<"inside destructor b"<<endl;
		}
};
class c:public b{
	public:
		c()
		{
			cout<<"inside constructor c"<<endl;
		}
		~c()
		{
			cout<<"inside destructor c"<<endl;
		}
};
int main()
{
	a* ptr=new c;
	delete ptr;
	
}
