#include<iostream>
using namespace std;
class person{
	protected:
	string name;
	int code;
	public:
		void create()
		{
			getline(cin,name);
			cin>>code;
		}
	/*	void update()
		{
			cout<<"updated value";
			cin.getline(name,20);
			cin>>code;
		}
		void display()
		{
			cout<<name;
			cout<<code;
		}*/
};
class account:virtual public person{
	protected:
	int pay;
	public:
		 void create()
		 {cout<<"enter pay";
		 	cin>>pay;
		 }
		 
	
};
class admin:public virtual person{
	protected:
	int experience;
	public:
		void create()
		{
			cin>>experience;
		}
};
class master:public account,public admin{
	
	public:
		void update()
		{
		cout<<"enter updated value"<<endl;
		cout<<"enter name"<<endl;
			getline(cin,name);
		cout<<"enter code"<<endl;
			cin>>code;	
			cout<<"enter pay"<<endl;
			cin>>pay;
			cout<<"enter expierence"<<endl;
			cin>>experience;
			
		}
		void display()
		{
			cout<<name<<" "<<code<<" "<<pay<<" "<<experience<<endl;
		}
};
int main()
{
	master obj;
	obj.person::create();
	obj.account::create();
	obj.update();
	obj.display();
}
