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
	
 reverse(v.begin(),v.end());
 for(it=v.begin();it!=v.end();it++)
 {
 	cout<<*it<<" ";
 }
 
//cout<<c;
}
