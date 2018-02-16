#include<iostream>
using namespace std;
class student
{protected:
	char name[100];
	int roll;
	public:
		 void get()
		 {
		 	cin>>roll;
		 }
		 void display()
		 {cout<<"roll no"<<endl;
		 	cout<<roll;
		 }
};
class marks:public student
{protected:
	int x[100],y;
	public:
		int i;
		void getdata()
		{
		for( i=0;i<2;i++)
		{
		cout<<"enter marks of subjct"<<endl;
			cin>>x[i];
		}
	}
		void displaydata()
		{cout<<"marks of student"<<endl;
		for(i=0;i<2;i++)
			cout<<x[i]<<endl;
		}
		};
 class result:public marks
 {
 	public:
 		int a,f=0;
 	void sum()
 	{for(i=0;i<2;i++)
 		 f=f+(x[i]);
 		a=f/2;
 		
	 }
	 void show()
	 {
	 	cout<<a;
	 }
	 
 	
 };
 int main()
 {
 	result obj;
 	obj.get();
 	obj.display();
 	obj.getdata();
 	obj.displaydata();
 	obj.sum();
 	obj.show();
 }
