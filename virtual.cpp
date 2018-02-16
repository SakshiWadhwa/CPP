#include<iostream>
using namespace std;
class A{
	protected:
		int a;
		public:
			void get()
			{
				cin>>a;
			}
};
class B:virtual public A
{
	protected:
		int b,r;
		public:
			void get()
			{
				cin>>b;
			}
			void mul()
			{
				r=a*b;
				//cout<<r;
			}
};
class C:public virtual A
{
	protected:
		int c,e;
		public:
			void get()
			{
				cin>>c;
			}
			void mul()
			{
		
			 e=a*c;}
};
class D:public B,public C
{
	public:
		void sum()
		{
			int d=r+e;
			cout<<d;
		}
};
int main()
{
	D obj;
	obj.A::get();
	obj.B::get();
	obj.B::mul();
	obj.C::get();
	obj.C::mul();
	obj.sum();
}
