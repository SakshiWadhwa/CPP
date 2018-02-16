#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
vector<int>::iterator it;
	vector<int>v;
	
	for(int i=0;i<7;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
 nth_element(v.begin(),v.begin()+5,v.end());
 //cout<<"it"<<*it;
 for(it=v.begin();it!=v.end();it++)
 {
 	cout<<*it<<" ";
 }
 

}
