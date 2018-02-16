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
 swap_ranges(v.begin()+2,v.end()-1,v2.begin());
  for(it=v.begin();it!=v.end();it++)
 {cout<<"value1:"<<" ";
 	cout<<*it<<" ";
 }
 
 for(it=v2.begin();it!=v2.end();it++)
 {cout<<"value2:"<<" ";
 	cout<<*it<<" ";
 }
}
