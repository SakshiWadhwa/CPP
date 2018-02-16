#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	cout<<"enter a, b, c, d"<<endl;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int x = __gcd(a,b);
	int y = __gcd(c,d);
	
	cout<<x<<" "<<y;
}
