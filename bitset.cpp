#include<bitset>
#include<iostream>
using namespace std;
int main()
{
	bitset<4> b;
	b[0]=1;
	b[1]=0;
	b[2]=1;
	b[3]=1;
	cout<<b<<endl;
	cout<<"count :" << b.count()<<endl;
	cout<<"size :"<<b.size()<<endl;
	cout<<"none :"<<b.none()<<endl;
	cout<<"test: "<<b.test(2)<<endl;
	cout<<"set: "<<b.set()<<endl;
	cout<<"set part: "<<b.set(2,0)<<endl;
	cout<<"set one bit: "<<b.set(3)<<endl;
	cout<<"reset: "<<b.reset()<<endl;
	cout<<"rest bit: "<<b.reset(1)<<endl;
	cout<<"flip: "<<b.flip()<<endl;
	cout<<"flip bit: "<<b.flip(1)<<endl;
	cout<<"convert binary to int:"<<b.to_ulong()<<endl;
	
	cout<<"binary to string: "<<b.to_string()<<endl;
	
	
	bitset<8> a(string("10110011"));
	cout<<a;
	
}
