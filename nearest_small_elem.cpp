#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	
	vector<int>v1(n);
	vector<int>v2(n);
	
	int i,t;
	cout<<"enter array"<<endl;
	for(i = 0; i < n; i++)
     {
     	    cin>>v1[i];
	 }
	 
	 stack<int>s;
	 
	 for(i = 0; i < n; i++)
	 {
	 	
	 	while(!s.empty() && s.top() >= v1[i])
	 	{
	 		
	 		    s.pop();
		 }
		 
		 if(s.empty())
		      v2[i] = -1;
		  
		  else
		  {
		  
		    v2[i] = s.top();
		       s.pop();
		   }
		    
	 	   
	 	s.push(v1[i]);
	 }
	 
	 for(i = 0; i < n; i++)
	      cout<<v2[i]<<" ";
}
