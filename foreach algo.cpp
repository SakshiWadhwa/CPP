#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void fun(int i)
{
	cout<<i;
}


int main()
{
	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	for_each(v.begin(),v.end(),fun);
}
