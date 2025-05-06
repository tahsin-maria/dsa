#include <bits/stdc++.h>
using namespace std;
int main()
{
    // push_back(), push_front(), pop_back(), pop_front()
    
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.pop_back();

    l.push_front(0);
    l.pop_front();

    for (int L : l)
    {
        cout << L << " "; // 1 2 3 4 5 6 7
    }
    cout << endl;
    // erase(),insert(),size(),clear(),empty(),begin(),end(),rbegin(),rend()

    l.erase(l.begin()); // ok
    l.push_front(1);
    // l.erase(l.begin(), l.begin() + 2); //not ok for list

    auto it = l.begin(); // same for insert()
    advance(it, 2);      // forwards iterator by 2
    l.erase(it);         // erases only index 2 here

    auto start = l.begin(); // use new iterator always
    auto end = l.begin();
    advance(end, 3);     // forwards iterator by 3
    l.erase(start, end); // erases from index 0 to 2 (not 3)

    auto s = l.begin();
    advance(s, 2);   // forwards iterator by 2
    l.insert(s, 34); // inserts 34 at index 2

    for (auto itt = l.begin(); itt != l.end(); itt++)
    {
        cout << *itt << " ";
    }
    cout << endl;

    for (auto rtt = l.rbegin(); rtt != l.rend(); rtt++)
    {
        cout << *rtt << " ";
    }
    cout << endl;

    cout << l.size() << " " << l.empty() << " ";
    l.clear();

    //vector is implemented as dynamic array
    //list is implemented as doubly linked list
}