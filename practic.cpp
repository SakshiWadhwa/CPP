#include<iostream>
using namespace std;
class abc
{
	int x;
	public:
		int operator+(abc obj){
			return(x+obj.x);
		}
	

friend int operator+(abc ,abc );
};

int operator+(abc o1,abc o2)
{
	return(o1.x+o2.x);
}
int main()
{
	abc obj();
	abc obj2();
	int x=operator+(obj,obj2)
	cout<<x<<endl;
}
