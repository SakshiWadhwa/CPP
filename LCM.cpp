#include<iostream>
using namespace std;

int main()
{
	int i = 2;
	int a, b, m = 1;
	cin>>a>>b;
	while(a != 1 || b != 1)
	{
		if(a % i == 0 || b % i == 0)
		{
			if(a % i == 0 && b % i == 0)
			{
				a = a / i;
				b = b / i;
				m = m * i;
			}
			else if(a % i == 0 && b % i != 0)
			{
				a = a / i;
				m = m * i;
			}
			else if(a % i != 0 && b % i == 0)
			{
				b = b / i;
				m = m * i;
			}
		}
		else 
		  i++;
	}
	cout<<m;
}
