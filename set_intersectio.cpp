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
	
	vector<int>v2;
	vector<int>v3;
	
	for(int i=0;i<4;i++)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
	copy(v.begin(),v2.begin(),v3.begin());
	
 includes(v.begin(),v.end(),v2.begin(),v2.end());
 for(it=v.begin();it!=v.end();it++)
 {
 	cout<<*it<<" ";
 }
 for(it=v2.begin();it!=v2.end();it++)
 {
 	cout<<*it<<" ";
 }
 for(it=v3.begin();it!=v3.end();it++)
 {
 	cout<<*it<<" ";
 }


}
