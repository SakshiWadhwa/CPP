#include<iostream>
using namespace std;
class abc
{
	int *x,*y;
	public:
		abc()
		{
			x=new int;
			y=new int;
		}
		void change()
		{
			cin>>*x>>*y;
		}
		void display()
		{
			cout<<*x<<" "<<*y<<endl;
		}
		
};
int main()
{
	abc obj;
	obj.change();
	obj.display();
	abc obj1=obj;
	obj1.change(
	);
	obj.display();
}
