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
	
	pair<vector<int>::iterator,vector<int>::iterator>p;
	p=mismatch(v.begin(),v.end(),v2.begin());
	cout<<"mismatch";
	 cout<<*(p.first)<<" ";
	 cout<<*(p.second);
	
	
	
	
 
}
