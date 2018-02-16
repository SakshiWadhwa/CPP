#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
vector<int>::iterator it;
	vector<int>v(5);
	int a[]={1,2,3,4,5};
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
 copy(a,a+5,v.begin());
 for(it=v.begin();it!=v.end();it++)
 {
 	cout<<*it<<" ";
 }
 
//cout<<c;
}
