#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
vector<int>::iterator it;
	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	replace(v.begin(),v.end(),20,99);
	for(it=v.begin();it!=v.end();it++)
 {cout<<"value1:"<<" ";
 	cout<<*it<<" ";
 }
}
