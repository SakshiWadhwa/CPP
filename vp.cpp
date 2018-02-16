#include<iostream>
using namespace std;
class abc{
	public:
		virtual void fun()
		{
			cout<<"inside abc"<<endl;
		}
};
typedef void(* PNT)();
int main()
{
	abc obj;
	abc* ptr=&obj;
	cout<<(int*)&obj<<endl;
	cout<<(int*)*(int*)&obj<<endl;
	cout<<(int*)*(int*)*(int*)&obj<<endl;
	PNT p=(PNT)(int*)*(int*)*(int*)&obj;
	(*p)();
}
