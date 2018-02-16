#include<iostream>
using namespace std;
class one
{protected:
	int a;
	public:
		void getinput()
		{
			cin>>a;
		}
};
class two
{protected:
	int b;
	public:
		 void getinput()
		 {
		 	cin>>b;
		 }
};
class three:public one,public two
{public:
	void display()
	{
	
	int c=a*b;
	cout<<c;
}
};
int main()
{
	three obj;
	obj.one::getinput();
	obj.two::getinput();
	obj.display();
}
