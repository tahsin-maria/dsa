#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // map<key,value>name;
    map<string, int> m; // insert(),erase(),count() --> O(logN)
    // m[key]=value
    m["raidah"] = 2310035;
    m["oishi"] = 2310036;
    m["promy"] = 2310048;
    m["shrabonti"] = 2310054;

    // count()
    cout << "count for key raidah = " << m.count("raidah") << " , value of key raidah = " << m["raidah"] << endl;

    // insert(),emplace(),erase()
    m.insert({"saba", 2310013});
    m.erase("saba"); // deletes key
    m.emplace("saba", 2310013);

    for (auto maps : m)
    {
        cout << maps.first << " " << maps.second << endl;
    } // printed in sorted order(ascending) of keys

    if (m.find("oishi") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    cout << m.size() << endl;

    // multimap //multimap is used for duplicate keys
    multimap<string, int> ml; // keys can be duplicate
    // ml["raidah"] = 2310035; //[] wrong
    ml.emplace("maria", 2310034); // right way to insert
    ml.emplace("maria", 2310034);
    ml.emplace("maria", 2310034);
    ml.emplace("maria", 2310034);

    ml.erase(ml.find("maria")); // deletes first key
    // ml.erase("maria"); // deletes all keys
    for (auto maps : ml)
    {
        cout << maps.first << " " << maps.second << endl; // one key deleted
    }
    cout << endl;

    // unordered_map //insert(),erase(),count() --> O(1)
    unordered_map<string, int> um; // unordered_map is used for faster access of keys
    um["raidah"] = 2310035;
    um["oishi"] = 2310036;
    um["promy"] = 2310048;
    um["shrabonti"] = 2310054;
    for (auto maps : um)
    {
        cout << maps.first << " " << maps.second << endl; // random order
    }
    
    return 0;
}