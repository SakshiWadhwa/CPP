#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>


int main()
{
vector<int>::iterator it;
vector<int>result(4);
	vector<int>v;
	vector<int>v2;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	
 //adjacent_difference(v.begin(),v.end(),result.begin());
  adjacent_difference(v.begin(),v.end(),result.begin(),multiplies<int>());
 for(it=result.begin();it!=result.end();it++)
 {
 	cout<<*it<<" ";
 }

 

}
