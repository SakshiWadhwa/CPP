#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool isOdd(int i)
{
	if(i%2)
	return 1;
	else 
	return 0;
}

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
	
	int c=count_if(v.begin(),v.end(),isOdd);
 
cout<<c;
}
