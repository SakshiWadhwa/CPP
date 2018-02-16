
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

 
vector < int > cutSticks(vector < int > a) {

   int count = 0, small = 999;
   int k = 0, z = 0,x,i,p = 0;
   vector<int>t;//(a.size()+1);
    while(count+1 <= a.size())
    { 
        k = 0; z = 0;
        small = 999;
        for(i = 0; i < a.size(); i++)
        {
           if(a[i] < small && a[i] > 0)
            {
                small = a[i];
            }
        }
    
        for(i = 0; i < a.size(); i++)
        {
            if(small == a[i])
               k++;
            else if(a[i] != 0)
            {
               z = z + 1;
            }  
        }
        
       for(i = 0; i < a.size(); i++)
       {
          if(a[i]>0)
          {
             a[i] = a[i] - small;
             if(a[i] == 0)
              count++;
             x = k + z; 
           }
       
        }
        //if(x > 0)
        t.push_back(x);
       //t[p++] = x;
    }
    for(i = t.size() - 1; i >= 0; i--)
        if(t[i] == 0)
           t.pop_back();
        return t;
}
int main() {
    
    vector < int > res;
    
    int _lengths_size = 0;
    cin >> _lengths_size;
    
    vector<int> _lengths;
    int _lengths_item;
    for(int _lengths_i=0; _lengths_i<_lengths_size; _lengths_i++) {
        cin >> _lengths_item;
        
        _lengths.push_back(_lengths_item);
    }
    
    res = cutSticks(_lengths);
    cout<<"output: "
    for(int res_i=0; res_i < res.size(); res_i++) {
    	cout << res[res_i] << endl;;
    }
    
    
    return 0;
}

