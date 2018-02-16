#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int>g;
	g.insert(10);
	g.insert(50);
	g.insert(5);
	set<int>::iterator it;
	it=g.begin();
	g.insert(it,20);
	g.insert(it,35);

//g.lower_bound(40);
cout<<"size"<<g.size()<<endl;
cout<<"highest value"<<*(g.rbegin())<<endl;
/*set<int>::value_compare comp=g.value_comp();
while(comp(*(it++),*(g.rbegin())))
{
	cout<<*it<<" ";
}*/  //
do
{
	cout<<*it<<" ";
}

while(g.value_comp()(*(it++),*(g.rbegin())));// access first element also

/*	for(it=g.begin();it!=g.end();it++)
	{
		cout<<*it<<" ";
	}*/
}
