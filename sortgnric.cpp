#include<iostream>
using namespace std;
template<class t>
void  bubblesort(t* a,int n)
{
int i,j;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			t temp;
          if(a[j]>a[j+1])
          {
          	temp=a[j];
          	a[j]=a[j+1];
          	a[j+1]=temp;
		  }
		}
	}
}

 int main()
 {int i;
 int a[5]={2,4,1,5,8};
 for(i=0;i<5;i++)
 
 {
 	cout<<a[i]<<endl;
 }
 bubblesort<int>(a,5);
 cout<<endl;
 for(i=0;i<5;i++)
 {
 	cout<<a[i]<<endl;
 }
}
	

