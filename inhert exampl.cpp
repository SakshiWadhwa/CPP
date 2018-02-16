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
		 {cout<<"roll no";
		 	cout<<roll;
		 }
};
class marks:public student
{protected:
	int x,y;
	public:
		void getdata()
		{cout<<"enter marks of subjct"<<endl;
			cin>>x>>y;
		}
		void displaydata()
		{cout<<"marks of student";
			cout<<x<<" "<<y<<endl;
		}
		};
 class result:public marks
 {
 	public:
 		int a;
 	void sum()
 	{
 		 a=(x+y)/2;
 		
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
