#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second << endl;
    // pair<string,int>p={"hello",23};
    // pair of pairs
    pair<int, pair<char, string>> pp = {99, {'M', "Tahsin"}};
    cout << pp.first << " " << pp.second.second << endl;

    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    // a vector of pairs***

    // for(pair<int,int>x:v)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    } // same
    cout << endl;

    v.push_back({4, 5});
    v.emplace_back(5, 6); // in-place obj create
    // automatically converts it to pair

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}