#include<iostream>
using namespace std;
class abc
{
	int *x,*y;
	public:
		abc()
		{
			x = new int;
			y = new int;
		}
		abc(abc & obj)
		{
			x=new int;
		y=new int;
			*x=*(obj.x);
			*y=*(obj.y);
		}
		void change()
		{
			cin>>*x;
			cin>>*y;
		}
		void display()
		{
			cout<<*x<<" "<<*y<<endl;
		}
		
};
int main()
{
	abc obj2;
	obj2.change();
	obj2.display();
	abc obj1(obj2);
	obj1.change();
	obj2.display();
}
