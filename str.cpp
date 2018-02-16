#include<iostream>
#include<string.h>
using namespace std;
class str{
	char* p;
	int len;
	public:
		 str()
		 {
		 	p=NULL;
		 	len=0;
		 }
		 str(const char* s)
		 {
		 	len=strlen(s);
		 	p=new char[len+1];
		 	strcpy(p,s);
		 }
		 str(const str &s)
		 {
		 	len=s.len;
		 	p=new char[len+1];
		 	strcpy(p,s.p);
		 }
		 ~str()
		 {
		 	delete p;
		 }
		 friend void show(const str s)
	{
		cout<<s.p<<endl;
	}
	friend str* operator+(const str& s,const str& t)
	{
		 str *temp = new str;
		temp->len=s.len+t.len;

		temp->p=new char[temp->len+1];
		strcpy(temp->p,s.p);
		strcat(temp->p,t.p);

		return temp;
	}
	friend int operator<=(const str& s,const str& t)
	{
		int m=strlen(s.p);
		int n=strlen(t.p);
		if(m<=n)
		return 1;
		else
		return 0;
	}

};
int main()
{
	str s1="hello";
	str s2="world";
	str s3="sakshi";
	str t1,t2;

	t1=s1;
	t2=s2;
	str* t3=s1+s2;
	cout<<"t1";
	show(t1);
	cout<<"t2";
	show(t2);
	cout<<"t3";
	show(*t3);

	if(t1 <= *t3)

	{
		show(t1);
		cout<<"small";
		show(*t3);
		cout<<endl;
	}
	else
	{
		show(*t3);
		cout<<"small";
		show(t1);
		cout<<endl;
	}
}
