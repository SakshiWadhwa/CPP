#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end\t:\t";
    for (i = g1.begin(); i != g1.end(); ++i)
        cout << *i << '\t';

    cout << endl << endl;
    cout << "Output of rbegin and rend\t:\t";
    for (ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << '\t' << *ir;
 cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size()<<endl;


    vector <int> g2;

    for (int i = 1; i <= 10; i++)
        g2.push_back(i * 10);

    cout << "Reference operator [g] : g2[2] = " << g1[2];
    cout << endl;
    cout << "at : g2.at(4) = " << g2.at(4);
    cout << endl;
    cout << "front() : g2.front() = " << g2.front();
    cout << endl;
    cout << "back() : g2.back() = " << g2.back();
    cout << endl;

    return 0;

}
