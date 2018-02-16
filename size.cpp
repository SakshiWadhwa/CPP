#include<iostream>
using namespace std;
 class a{
	public:
		virtual void fun()
		{
		cout<<"base class"<<endl;	
		}
};
class b:public a
{
	public:
		void fun()
		{
			cout<<"drrived class";
		}
};
int main()
{
//	a obj;
//	cout<<sizeof(a);
//a* ptr=&obj;
//ptr->fun();
b obj;
a* ptr=&obj;
ptr->fun();
}
