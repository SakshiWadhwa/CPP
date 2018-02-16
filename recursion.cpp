#include<iostream>
using namespace std;

int recursion ( int x )
{
	    cout << x << endl;
	    if( x-- )
	    {
	    	   cout<<"pre "<<x<<endl;
	    	   recursion(x) + recursion(x);
	    	   cout<<x<<" func_call\n";
		}
		cout<<"end\n\n";
}

int main( void )
{
	int x;
	cin>>x;
	recursion(x);
	return 0;
}
