#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	
	int a[n],i,j,k;
	cout<<"enter array:"<<endl;

	
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter element you want to search"<<endl;
	cin>>k;
	
	for(i = 0; i < n; i++)
	{
		if(a[i] == k)
		cout<<"element found at: "<<i<<endl;
	}
}
