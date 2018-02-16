#include<iostream>
#include<math.h>
using namespace std;
class account{
	char cname[100];
	int accno;
	char type;
	public:
		void get()
		{
			cout<<"enter name";
			cin>>cname;
			cout<<"enter acc no";
			cin>>accno;
			//cout<<"enter type of account ie.s or c";
			//cin>>type;
		}
	void display()
	{
		cout<<cname<<" "<<accno<<" "<<type<<endl;
	}
};
class saving:public account
{
int bal;
//char chequebook='N';
public:
	void get()
	
	{account::get();
	cout<<"enter initial balance";
		cin>>bal;
	}
void compound_intrst()
{
	float r=0.02;
	int tym=2;
	float c=bal*pow((1+r),tym);
	
}
void deposit()
{
	int amount;
	cout<<"enter amount u want to deposit";
	cin>>amount;
	bal=bal+amount;
	cout<<bal;
}
void withdraw()
{
	int amount;
	cout<<"how much u want to withdraw";
	cin>>amount;
	if(amount>bal)
	{
		cout<<"transaction failed";
		
	}
	else
	{
		bal=bal-amount;
	}
	cout<<bal;
}
void display()
{account::display();
	cout<<bal;
}
	
};
class current:public account{
	int bal1;
	int minbal=50;
	//char checkbook='Y';
	char choice;
	float charges;
	public:
		void get()
		{
			account::get();
			cout<<"enter balance";
			cin>>bal1;
		}
		void deposit()
		{
		
	int amount;
	cout<<"enter amount you want to deposit";
	cin>>amount;
	bal1=bal1+amount;
	cout<<bal1;
	
		}
			void withdraw()
		{
				int amount;
				cout<<"how much u want to withdraw";
	cin>>amount;
	if(amount>bal1)
	{
		cout<<"transaction failed";
		
	}
	else
	{
		if(amount<minbal)
		{
			cout<<"warning...charges will apply..do u want to continue.?";
		cin>>choice;
		if(choice=='Y')
		{
			charges=0.05*bal1;
			bal1=bal1-amount;
			cout<<"charges";
			cout<<charges<<endl;
			cout<<bal1<<endl;
			bal1=bal1-charges;
			cout<<"new bal";
			cout<<bal1<<endl;
			}	
		}
		
		bal1=bal1-amount;
	}
	cout<<bal1;
		}
		void display()
		{
			account::display();
			cout<<"bal";
			cout<<bal1;
		}
		
};
int main()
{char ch;
	saving o1;
     current o2;
     cout<<"which type of account u want s or c";
     cin>>ch;
     if(ch=='s')
     {
     o1.get();
     o1.deposit();
     o1.withdraw();
     o1.compound_intrst();
     o1.display();
 }
 else
 {
 
     o2.get();
     o2.deposit();
     o2.withdraw();
     o2.display();
 }
}
