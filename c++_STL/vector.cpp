#include <bits/stdc++.h>
using namespace std;
int main()
{
    // size(), capacity() , push_back() ,emplace_back() , pop_back()
    vector<int> v; // size 0
    cout << v.size() << endl;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);                                  // size 3 now
    cout << v.size() << " " << v.capacity() << endl; // size=3 , capacity=2*(previous size)=2*2=4
    v.emplace_back(3);                               // emplace_back() can push inplace objects
    v.push_back(4);
    v.pop_back();
    // printing
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "val at index 2:" << v[2] << " or " << v.at(2) << endl;

    // front(),back()
    cout << "front = " << v.front() << endl; // 0
    cout << "back = " << v.back() << endl;   // 3

    vector<int> vec = {9, 8, 7, 6};
    // vector<int> v(5, 0);  5 elements , all are 0
    // vector<int> v(16, -1);  16 elements , all are -1
    vector<int> v1(v); // initialize v1 with v
    v1.push_back(100);

    // erase(),insert()
    v1.erase(v1.begin());
    // v1.begin() gives the position of the first element
    // it is an iterator

    v1.erase(v1.begin() + 1); // erase the element at index 1
    v1.erase(v1.begin(), v1.begin() + 2); // erase from index 0 to 1 (not 2)
    vec.insert(vec.begin() + 2, 45); // 9 8 45 7 6 // 45 at index 2
    v.clear(); // clears

    cout << v1.size() << " " << v1.capacity() << endl; // 0 8(initial capacity)
    cout << vec.empty() << endl;                       // 0

    // iterators v.begin(),v.end() (pointers)
    // v.end() --> null pointer , it points to n index of n sized vector which is garbage
    // v.rbegin(),v.rend()

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator rit;
    for (rit = vec.rbegin(); rit != vec.rend(); rit++)
    {
        cout << *rit << " ";
    }
    // rbegin() --> last element
    // rend() --> before first element
    cout << endl;

    // another way to declare iterators (normal or reverse both in the same way)
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    } // same and preferred

    
}
