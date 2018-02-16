#include<iostream>
using namespace std;
class imperial{
	float feet;
	 float inches;
	public:
		imperial()
		{
			
		}
		imperial(int cms)
		{
			int x=cms/2.54;
			feet=x/12;
			inches=x-feet*12;
		}
		void display()
		{
			cout<<feet<<" "<<inches<<endl;
		}
};
int main()
{
	int cms;
	cin>>cms;
	imperial obj;
	obj=cms;
	obj.display();
}
