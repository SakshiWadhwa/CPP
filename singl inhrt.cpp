/*#include<iostream>
using namespace std;
class one
{
	int a;
	int b;
	public:
		 void get()
		 {
		 	cin>>a>>b;
		 }
		 void display()
		 {
		 	cout<<a<<" "<<b;
		 }
		 int geta()
		 {
		 	return a;
		 }
		 int getb()
		 {
		 	return b;
		 }
};
class two:public one
{
	int c;
	public:
		void input()
		{
			cin>>c;
		}
		void mul()
		{
			int r=c*geta()*getb();
			cout<<r;
		}
};
int main()
{
	two obj;
	obj.get();
	obj.display();
	obj.input();
	obj.mul();
}*/
#include<iostream>
using namespace std;
class one
{
	int a;
	int b;
	public:
		void getvalue()
		{
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<b;
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};
class two:public one
{
	int c;
	public:
		void input()
		{
			cin>>c;
		}
		void mul()
		{
			int r=c*geta()*getb();
			cout<<r;
		}
};
int main()
{
	two obj;
	obj.getvalue();
	obj.input();
	obj.mul();
}
