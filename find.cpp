#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void fun(int i)
{
	cout<<i;
}


int main()
{std::vector<int>::iterator it;
	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
 it=find(v.begin(),v.end(),30);
	cout<<*it;
}
