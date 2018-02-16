#include<iostream>
using namespace std;
class abc
{
int x;
int y;
public:
	abc()
	{
		x=10;
		y=20;
	}
void operator++()
{
	++x;
	++y;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
		}
		/*void diff()
		{
			x=-x;
			y=-y;
			}*/	
};
int main()
{int a;
	abc obj;
	//-obj;
//	obj.operator-();
//obj.diff();
++obj;
	obj.display();
//	obj++;
}
