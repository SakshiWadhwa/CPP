#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>



int main()
{
vector<int>::iterator it;
	vector<int>v;
	vector<int>v2;
//	int num[]={2,3,4,5,6,7,10,11};
cout<<"enter 1 vector"<<endl;
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
/*	int c=count_if(num,num+8,bind2nd(less<int>(),10));
 int d=count_if(num,num+8,bind2nd(equal_to<int>(),10));
cout<<c<<" "<<d;*/
int c=count_if(v.begin(),v.end(),bind1st(less<int>(),10));
cout<<"less in bind1st: "<<c<<" ";
int d=count_if(v.begin(),v.end(),bind1st(equal_to<int>(),10));
cout<<"equal in bind1st:"<<d<<endl;


int e=count_if(v.begin(),v.end(),bind2nd(less<int>(),10));
cout<<"less in bind2nd: "<<e<<" ";
int f=count_if(v.begin(),v.end(),bind2nd(equal_to<int>(),10));
cout<<"equal in bind2nd:"<<f<<endl;


cout<<"enter 2nd vector"<<endl;
for(int i=0;i<6;i++)
	{
		int y;
		cin>>y;
		v2.push_back(y);
	}
	
	pair<vector<int>::iterator,vector<int>::iterator>p;
	p=mismatch(v.begin(),v.end(),v2.begin(),equal_to<int>());
	cout<<"mismatch: ";
	 cout<<*(p.first)<<" ";
	 cout<<*(p.second)<<endl;
	 
	 
	 pair<vector<int>::iterator,vector<int>::iterator>q;
	q=mismatch(v.begin(),v.end(),v2.begin(),not_equal_to<int>());
	cout<<"match: ";
	 cout<<*(q.first)<<" ";
	 cout<<*(q.second)<<endl;
}
