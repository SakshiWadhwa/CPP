#include<iostream>
using namespace std;
class abc{
	int x;
	int y;
	public:
		virtual void input()=0;
		virtual void output()=0;
};
class xyz:public abc
{int a;
public:
void input()
{
	cin>>a;
	
}
void output()
{
	cout<<a;
}
	
};
int main()
{
	xyz obj;
	obj.input();
	obj.output();
}
