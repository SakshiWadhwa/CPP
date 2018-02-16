#include<iostream>
using namespace std;
class abc{
	int a;
	public:
		void input()
		{
			cin>>a;
		}
		void output()
		{
			cout<<a;
		}
		abc* operator->(void)
		{
			return this;
		}
};
int main()
{
	abc obj;
	abc* ptr=&obj;
	ptr->input();
	obj->output();
}
