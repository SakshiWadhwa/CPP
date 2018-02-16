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
vector<int> v3(5);
vector<int> v4(10);
vector <int>v5(10);
int main()
{
    for(int i=0;i <10;i++)
    {
        v.push_back(i);
    }
     for(int i=9;i >=0;i--)
    {
        v1.push_back(5);
    }
    for_each(v.begin(),v.end(),func);   // for_each function
    cout<<endl;

    vector<int>::iterator it;
    it = find(v.begin(),v.end(),5); //find function finds a particular element
    cout<<*it;
    cout<<endl;
v.push_back(5);
it = find_end(v.begin(),v.end(),v.end()-1,v.end()); //find function finds a range of elements from end
cout<<*(--it);
cout<<endl;
it = find_first_of(v.begin(),v.end(),v.end()-1,v.end()); //find function finds a range of elements from beginning
cout<<*(--it);
cout<<endl;
int i = count(v.begin(),v.end(),5); //count the number of elements in given container
cout<<i<<endl;

pair<vector<int>::iterator,vector<int>::iterator> p;

 p = mismatch(v.begin(),v.end(),v1.begin());   //returns iterators from both the vectors where first mismatch was observed

 cout<<*p.first;
 cout<<" "<<*p.second<<endl;

p = mismatch(v.begin(),v.end(),v1.begin(),not_equal_to<int>()); //returns iterators from both the vectors where first matching values was observed
cout<<*p.first;
 cout<<" "<<*p.second<<endl;

bool x = equal(v.begin(),v.end(), v.begin()); //compares two vectors whether they are equal or not
 cout<< x<<endl;

 it  = search(v.begin(),v.end(), v.begin()+3, v.begin()+5); // search a range from beginning
cout<<*it<<endl;

it = search_n(v.begin(),v.end(),2,5); //seach 5 two times at adjacent location
cout<<*it<<endl;

copy(v.begin(),v.begin()+5,v3.begin());// copy elements from one container to another
for_each(v3.begin(),v3.end(),func);
    cout<<endl;
// copy_if function
 /*it =copy_if(v.begin(),v.end(),v4.begin(), IsOdd);
 v4.resize(distance(v4.begin(), it));
    for_each(v4.begin(),v4.end(),func);
    cout<<endl;*/
int  s = v.size();
 v4.resize(s);
copy_backward(v.begin(),v.end(),v4.end());  //copy at last of vector v4
for_each(v4.begin(),v4.end(),func);
    cout<<endl;

swap(v4,v3);  // swap two vectors
for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    swap_ranges(v4.begin(),v4.end(),v3.begin()+5); //swap particular range of two vectors
    for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    vector<int>::iterator it1;
    iter_swap(v3.begin()+2,v4.begin()); //swaps two elements pointed by iterators
 for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    transform(v4.begin(),v4.end(),v3.begin(),v4.begin(),plus<int>()); //add v4 to v3 and stores result in v4
for_each(v4.begin(),v4.end(),func);
    cout<<endl;
     transform(v4.begin(),v4.end(),v3.begin(),v4.begin(),minus<int>());//subtracts v4 to v3 and stores result in v4
for_each(v4.begin(),v4.end(),func);
    cout<<endl;
     transform(v4.begin(),v4.end(),v3.begin(),v4.begin(),multiplies<int>());//multiplies v4 to v3 and stores result in v4
for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    /* transform(v4.begin(),v4.end(),v3.begin(),v4.begin(),divides<int>());
for_each(v4.begin(),v4.end(),func);
    cout<<endl;*/
    transform(v4.begin(),v4.end(),v4.begin(),bind2nd(plus<int>(),1)); // adds elements of v4 with 1 and stores them in v4
    for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    replace(v4.begin(),v4.end(),1,10); // replaces 1 with 10
    replace_if(v4.begin(),v4.end(),IsOdd,100); //replaces odd numbers with 100
    replace_copy(v4.begin(),v4.end(),v5.begin(),10,1); //copies elements of v4 to v5 and replace 10 with 1
    for_each(v4.begin(),v4.end(),func);
    cout<<endl;
    for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    replace_copy_if(v4.begin(),v4.end(),v5.begin(),IsEven,20);//copies elements of v4 to v5 and replace even numbers with 20
    for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    fill(v5.begin(),v5.end(),0); //fills the given range with 0
    fill_n(v5.begin(),2,1);   // fills 2 elements starting from v5.begin() with 1
 for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    generate(v5.begin(),v5.end(),isUnique); //generates vector with unique numbers
     for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    generate_n(v5.begin(),5,isUnique); //generates 5 unique numbers from the beginning
for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    it=remove(v5.begin(),v5.end(),14); // removes 14 from the give range
    v5.resize(distance(v5.begin(), it));
    for_each(v5.begin(),v5.end(),func);
    cout<<endl;
     it=remove_if(v5.begin(),v5.end(),IsOdd); // removes odd elements from the give range
    v5.resize(distance(v5.begin(), it));
    for_each(v5.begin(),v5.end(),func);
    cout<<endl;
    // Note:: similarly see yourself with remove_copy and remove_copy_if



}
