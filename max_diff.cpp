#include <iostream>
using namespace std;

int main() {
	//code
	int t,j;
	cout<<"enter cases"<<endl;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cout<<"enter n"<<endl;
	    cin>>n;
	    
	    int a[n];
	    cout<<"enter array"<<endl;
	    for(i = 0; i < n; i++)
	    cin>>a[i];
	    
	    int max = -1,k = 0;
	    for(i = 0; i < n; i++)
	    {
	        if(max < a[i])
	        {
	            max = a[i];
	            k++;
	        }
	    }
	    int min = 999;
	    for(j = k; j >= 0; j--)
	    {
	      if(min > a[j])  
	         min = a[j];
	    }
	    
	    cout<<max-min;
	    
	}
	return 0;
}
