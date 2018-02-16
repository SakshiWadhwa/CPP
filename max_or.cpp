#include<iostream>
using namespace std;

int main()
{
	int l,f,i,j,v,r,k;
	
	cout<<"enter l and r"<<endl;
	cin>>l>>r;
	cout<<"enter k"<<endl;
	cin>>k;
	
	int a[1000];
	int t=0;
	for(i = l; i < r-1; i++)
	{
		for(j = l+1; j < r; j++)
		{
			v = i^j;
			
			if(v < k)
			a[t++]=v;
			
		}
	}
	int max = -1;
	for(i = l; i < r; i++)
	{
		if(a[i] > max)
		max = a[i];
	}
	cout<<max;
	
}

