#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // set --> unique values
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);

    for (auto v : s)
    {
        cout << v << " "; // sorted
    }

    // erase(),find(),count() --> O(logn)
    // lower_bound(),upper_bound() --> only for set and multisets

    set<int> ss = {1, 3, 5, 7, 9};

    auto lb = ss.lower_bound(5); // gives iterator to 5 //out:5
    // returns an iterator pointing to:
    // the first element that is greater than or equal to 1

    auto ub = ss.upper_bound(5); // gives iterator to 7 //out:7
    // returns an iterator pointing to:
    // the first element that is strictly greater than x
    cout << *lb << " " << *ub << endl;
    // if not found then it returns end()

    // multiset
    multiset<int> ss1;
    ss1.insert(1);
    ss1.insert(3);
    ss1.insert(2);
    ss1.insert(4);
    ss1.insert(5);
    for (auto v : ss1)
    {
        cout << v << " "; // sorted
    }
    cout << endl;

    // unordered_set --> O(1)
    unordered_set<int> us;
    us.insert(1);
    us.insert(3);
    us.insert(2);
    us.insert(4);
    us.insert(5);
    for (auto v : us)
    {
        cout << v << " "; // not sorted
    }

    cout << endl;
    return 0;
}