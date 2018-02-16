#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
vector<int>::iterator it;
	vector<int>v;
	vector<int>v2;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	for(int i=0;i<4;i++)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
	
	replace_copy(v.begin(),v.end(),v2.begin(),20,99);
	
	for(it=v.begin();it!=v.end();it++)
 {cout<<"value1:"<<" ";
 	cout<<*it<<" ";
 }
 
 	for(it=v2.begin();it!=v2.end();it++)
 {cout<<"value2:"<<" ";
 	cout<<*it<<" ";
 }
 
}
