#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>



int main()
{vector<int>::iterator it;
	vector<int>v;
	for(int i=0;i<7;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}

	
	vector<int>v2;	
	for(int i=0;i<3;i++)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
 it=search(v.begin(),v.end(),v2.begin(),v2.end());
	cout<<*it;
}
