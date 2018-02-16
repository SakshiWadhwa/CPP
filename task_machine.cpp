#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"enter tasks"<<endl;
	int i,j,n,k;
	cin>>n;
	int x[n],y[n],z[n];
	cout<<"enter machines"<<endl;
	cin>>k;
	int m[k];
	
	for(i = 0; i < n; i++)
	{
		cout<<"enter start nd end time of task t"<<i<<": "<<endl;
		cin>>x[i]>>y[i];
		z[i] = abs(x[i] - y[i]);
			
	}
	
	for(i = 0; i < k; i++)
	{
		m[i] = 0;
	}
	for(i = 0; i < n; i++)
	  cout<<z[i]<<" ";
	cout<<endl;
	
	j = 0;
	m[j] = m[j] + z[0];
	cout<<"machine "<<j<<": "<<m[j]<<" "<<endl;
	for(i = 1; i < n; i++)
	{
		j=0;
		if(x[i] >= m[j])
		{
				m[j] = m[j] + z[i];
				cout<<"machine "<<j<<": "<<m[j]<<" ";
		}
		else
		{
			j++;
			
				if(x[i] >= m[j])
				{
					m[j] = m[j] + z[i];
					cout<<"machine "<<j<<": "<<m[j]<<" ";
				}
			
		}
	cout<<endl;
	}
}
