
#include<iostream>
#include<string.h>
using namespace std;
class books
{char auth_name[10][20];
char titl_name[10] [20];
int price[10];
char publishr[10][20];
int stock_pos[10];
char name[10][20];
	public:
		void check()
		{int x,y,pos,pr;
			cout<<"enter title and publisher";
			char s1[10],s2[10];
			cin>>s1>>s2;
			for(int i=0;i<3;i++)
			{
			
			 x=strcmp(titl_name[i],(s1));
			 y=strcmp(auth_name[i],(s2));
			
			if(x==0&&y==0)
			{
						pos=stock_pos[i];
						pr=price[i];
					
			break;
		}
		}
			if(x==0&&y==0)
			{
				cout<<"enter no. of copies";
				int z;
				cin>>z;
				if(pos<z)
				{
					cout<<"books not available";
				}
				else
				{
					cout<<pr*z;
				}
				
			
		}
	}
	void get()
	{int i;
		cout<<"enter details of book";
		for(i=0;i<3;i++)
		{
		
		cout.flush();
		cin>>auth_name[i]>>titl_name[i]>>publishr[i]>>price[i]>>stock_pos[i];
	}
}

};
int main()
{
	books a;
	a.get();
	a.check();
	
}
