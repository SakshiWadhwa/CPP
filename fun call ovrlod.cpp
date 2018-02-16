#include<iostream>
using namespace std;
class Distance{
	int a;
	int b;
	public:
		 Distance()
		 {
		 	cout<<"inside four"<<endl;
		 }
		 Distance(int x,int y)
		 {
		 	cout<<"inside one"<<endl;
		 	a=x;
		 	b=y;
		 }
		 void operator()(int u,int v){
		 	cout<<"two"<<endl;
			 a=u;
		 	b=v;
		 }
		 void display()
		 {
		 	cout<<"inside three"<<endl;
		 }
};
int main()
{
	Distance o(10,20);
	o.display();
	
	Distance o1;

o1.display();
	
}
