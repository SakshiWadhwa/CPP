#include<iostream>
#include<vector>
using namespace std;
int main ()
{
	vector<int>obj;
	int i;
	for(i=0;i<6;i++)
{
	int x;
	cin>>x;
	obj.push_back(x);
}
vector<int>::iterator ir;
for(ir=obj.begin();ir<obj.end();ir++)
{
	cout<<"output"<<*ir<<endl;
}
vector<int>::reverse_iterator ir1;
for(ir1=obj.rbegin();ir1<obj.rend();ir1++)
{
	cout<<"reverse output"<<*ir1<<endl;
}


cout<<obj.size()<<endl;
cout<<obj.max_size()<<endl;
cout<<obj.capacity()<<endl;
obj.resize(6);
cout<<obj.size()<<endl;
cout<<obj.empty()<<endl;
int sum=0;
while(!obj.empty()){
	
	sum=sum+obj.back();
	obj.pop_back();
}
cout<<sum;

}
