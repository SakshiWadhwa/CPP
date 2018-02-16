#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//predicate for for_each

void func(int n)
{
    cout<<n<<" ";
}

int main()
{    vector <int>v;
     for(int i=0;i <10;i++)
    {
        v.push_back(i);
    }
    make_heap(v.begin(),v.end()); // makes the heap
    for_each(v.begin(),v.end(),func);   // for_each function
    cout<<endl;
    cout<<v.front()<<endl; //prints the topmost element in heap
    v.push_back(27);
    push_heap(v.begin(),v.end());
     for_each(v.begin(),v.end(),func);   // for_each function
    cout<<endl;
    pop_heap(v.begin(),v.end());
    v.pop_back();
     for_each(v.begin(),v.end(),func);   // for_each function
    cout<<endl;
    sort_heap(v.begin(),v.end());
for_each(v.begin(),v.end(),func);   // for_each function
    cout<<endl;
   cout<< min(2,4)<<endl;
     cout<< max(2,4)<<endl;
    vector <int>::iterator it;
    it = min_element(v.begin(),v.end());
    cout<<*it<<endl;
    it = max_element(v.begin(),v.end());
    cout<<*it<<endl;
}
