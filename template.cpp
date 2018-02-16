#include<iostream>
using namespace std;
template<class t>
void fun(t a,t b)
{
	cout<<"inside one"<<endl;
}
template <class t1, class t2>
void fun(t1 a, t2 b)
{
	cout<<"inside two"<<endl;
}
template<>
void fun(int a, int b)
{
	cout<<"inside three"<<endl;
}
int main()
{
	fun(10,20);
	fun(10.2,20.2);
	fun(10,20.2);
	fun<int>(10,20);
}
