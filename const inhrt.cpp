#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		public:
			A()
			{
				cout<<"A";
			}
};
class B:public A
{
protected:
int b;
public:
 B()
 {
 	cout<<"B";
	 }	
};
class C:public A, virtual public B
{
protected:
int c;
public:
C()
{
	cout<<"C";
	}	
};
int main()
{ C obj;
	
}
