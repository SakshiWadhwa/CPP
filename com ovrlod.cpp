#include<iostream>
using namespace std;
class complex
{
int real;
int img;
 public:
  void get()
  {
  	cout<<"enter real and img";
  	cin>>real>>img;
	  }	
	  void display()
	  {
	  	cout<<real<<"+"<<img<<endl;
	  }
	  friend complex operator+(complex,complex);
	  
};
 complex operator+(complex c1,complex c2)
{complex t;
	  	t.real=c1.real+c2.real;
	  	t.img=c1.img+c2.img;
	  	return t;  
	  }
int main()
{
	complex c1,c2,c3;
	c1.get();
	c2.get();
	c3=c1+c2;
	c3.display();
	
}
