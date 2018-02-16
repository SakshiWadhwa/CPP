//error
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int i,j,t;
    vector<int>a(n);
    for(i = 0; i < n; i++)
       cin>>a[i];
    
     int count = 0, small = 999;
   int k = 0, z = 0;
   // while(count+1 <= n+1)
    for(j = 0; j < n; j++)
    {
        k = 0; z = 0;
        small = 999;
        for(i = 0; i < n; i++)
        {
           if(a[i] < small && a[i] > 0)
            {
                small = a[i];
            }
        }
    
        /*for(i = 0; i < n; i++)
        {
            if(small == a[i])
              k++;
           else if(a[i] != 0)
           {
             z = z + 1;
           }  
       }*/
        for(i = 0; i < n; i++)
            cout<<" a "<<a[i];
        cout<<endl;
       for(i = 0; i < n; i++)
       {
          if(a[i]>0)
          {
             a[i] = a[i] - small;
            // if(a[i] == 0)
              count++;
             //t = k + z; 
           }
       
        }
       cout<<count<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

