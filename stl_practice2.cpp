#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//predicate for for_each

void func(int n)
{
    cout<<n<<" ";
}
int isUnique(){
static int count=0;
return count++;
}
int IsOdd(int n)
{
    return(n%2);
}
int IsEven(int n)
{
    return(!(n%2));
}
vector<int> v;
vector<int> v1;
int main(){

        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);

vector<int>::iterator it;
   it = unique(v.begin(),v.end());
   v.resize(distance(v.begin(), it));
   for_each(v.begin(),v.end(),func);
   cout<<endl;
   sort(v.begin(),v.end());
  it = unique(v.begin(),v.end());
   v.resize(distance(v.begin(), it));
   for_each(v.begin(),v.end(),func);
   cout<<endl;
   //Note::see for yourself with unique-copy
   reverse(v.begin(),v.end()); //reverses the range
   for_each(v.begin(),v.end(),func);
   cout<<endl;
 //Note::see for yourself with reverse-copy
   rotate(v.begin(),v.begin()+2,v.end()); //rotate v.begin()to v.begin()+1 to end
   for_each(v.begin(),v.end(),func);
   cout<<endl;
  //Note::see for yourself with unique_copy
  random_shuffle(v.begin(),v.end()); //shuffles the elements of vector
  for_each(v.begin(),v.end(),func);
   cout<<endl;
   it=partition(v.begin(),v.end(),IsOdd); //partitions vector range on the basis of given elements
 for_each(it,v.end(),func);
   cout<<endl;
it=stable_partition(v.begin(),v.end(),IsEven); //partitions vector range on the basis of given elements
for_each(v.begin(),it,func);
   cout<<endl;
   partial_sort(v.begin(),v.begin()+2,v.end());
  for_each(v.begin(),v.end(),func);
   cout<<endl;
   //Note::see for yourself with partial-sort_copy
   nth_element(v.begin(),v.begin()+3,v.end()); // puts the nth element i.e v.begin()+3 to its actual position
  for_each(v.begin(),v.end(),func);
   cout<<endl;
     v1.push_back(0);
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);
        v1.push_back(4);
        v1.push_back(0);
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(3);
        v1.push_back(4);
   sort(v1.begin(),v1.end());
   it=upper_bound(v1.begin(),v1.end(),3); //return iterator to first element next than 3
   cout<<*it<<endl;
   it=lower_bound(v1.begin(),v1.end(),3); //returns iterator to first occurrence of element equal to 3
   cout<<*it<<endl;
   pair<vector<int>::iterator,vector<int>::iterator> p;
   p=equal_range(v1.begin(),v1.end(),3); //returns a pair of lower bound and upper bound iterators
   cout<<*p.first<<" "<<*p.second<<endl;
   bool x=binary_search(v1.begin(),v1.end(),3); //searches for 3 in a given range
    cout<<x<<endl;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    vector <int> result(15);
    vector <int> v3(20);
   //  random_shuffle(v.begin(),v.end());
     // random_shuffle(v1.begin(),v1.end());
    merge(v.begin(),v.end(),v1.begin(),v1.end(),result.begin()); //merges two sorted vectors and stores it in result
    for_each(result.begin(),result.end(),func);
   cout<<endl;
   x=includes(result.begin(),result.end(),v.begin(),v.end()); //checks if v is present in result
    cout<<x<<endl;
    it=set_union(v.begin(),v.end(),result.begin(),result.end(),v3.begin()); // union of two vectors
    for_each(v3.begin(),v3.end(),func);
   cout<<endl;
   it=set_intersection(v.begin(),v.end(),result.begin(),result.end(),v3.begin()); // intersection of two vectors
    v3.resize(distance(v3.begin(),it));
    for_each(v3.begin(),v3.end(),func);
   cout<<endl;
   v.push_back(50);
   it=set_difference(v.begin(),v.end(),result.begin(),result.end(),v3.begin()); // difference of two vectors
    v3.resize(distance(v3.begin(),it));
    for_each(v3.begin(),v3.end(),func);
   cout<<endl;
vector<int>v4(15);
      it=set_symmetric_difference(v.begin(),v.end(),result.begin(),result.end(),v4.begin()); // difference of two vectors
      for_each(v.begin(),v.end(),func);
   cout<<endl;
   for_each(result.begin(),result.end(),func);
   cout<<endl;
    v4.resize(distance(v4.begin(),it));

    for_each(v4.begin(),v4.end(),func);
   cout<<endl;
 }
