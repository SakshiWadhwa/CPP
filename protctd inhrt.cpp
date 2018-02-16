#include<iostream>
using namespace std;
class one{
	protected:
		
		int a;
	
		
		public:
			
		void get()
			{
			
			cin>>a;
		}
};
class two:protected one
{
	protected:
		int b;
		
public:
	void get()
		{
		one::get();
		cin>>b;
	}
	void mul()
	{
	
		int d=a*b;
		cout<<d;
	}
	
		
};
int main()
{
	two obj;
	//obj.one::get();
	obj.two::get();
	obj.mul();
}
