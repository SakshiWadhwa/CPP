#include<iostream>
using namespace std;
#include<vector>
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
	for(int i=0;i<4;i++)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
	
 transform(v.begin(),v.end(),v2.begin(),result.begin(),multiplies<int>());
 //transform(v.begin(),v.end(),v2.begin(),bind2nd(std::multiplies<int>(),1));
 
 for(it=result.begin();it!=result.end();it++)
 {
 	cout<<*it<<" ";
 }
/*for(it=v2.begin();it!=v2.end();it++)
 {
 	cout<<*it<<" ";
 }
*/
 

}
