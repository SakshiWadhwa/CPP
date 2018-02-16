#include<iostream>
using namespace std;
class shape{
	protected:
		double a;
		double b;
		double c;
		public:
			void getdata(double x,double y)
			{
			a=x;
			b=y;
			}
			virtual void display_area(){
				c=a*b;
			cout<<c<<endl;
			}
			
};
class triangle:public shape{
	public:
	void	display_area()
		{
			c=0.5*a*b;
			cout<<c<<endl;
		}
};
class rectangle:public shape{
	public:
/*	void	display_area(){
			c=a*b;
			cout<<c<<endl;
		}*/
};
class circle:public shape{
	public:
		void display_area(){
			c=3.14*a*a;
			cout<<c;
		}
};

int main()
{
shape* ptr;

triangle obj;
	
ptr = &obj;
ptr->getdata(10,20);
	ptr->display_area();
	rectangle obj1;
	ptr=&obj1;
	ptr->getdata(10,20);
	ptr->display_area();
	
	circle obj2;
	ptr=&obj2;
	ptr->getdata(10,10);
	ptr->display_area();
	
}
