#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,t,i,j,k,count;
	cin>>t;
	string str;
	
	while(t--)
	{
		cin>>n;
		for(i = 0; i < n; i++)
	    {
	    	cin>>str;
	    	count = 0;
	    	for(j = 0; j < str.length()-1; j++)
	    	{
	    		for(k = 1; k < str.length(); k++)
	    		{
	    			if(str[j] != str[k])
	    			count++;
				}
			}
			
			cout<<count<<" ";
		}
	}
}

