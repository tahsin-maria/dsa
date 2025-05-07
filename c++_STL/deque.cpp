#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // deque-->double ended queue
    // dynamic array exactly like vector
    // but it has front operations
    deque<int> d = {1, 2, 3, 4, 10};

    // push_back(),pop_back(),emplace_back(),emplace_front(),pop_front(),push_front()
    d.push_back(100);
    d.push_front(99999);
    d.pop_back();
    d.pop_front();

    d.emplace_back(100);
    d.emplace_front(99999);

    cout << d[2] << endl;
    cout << "front = " << d.front() << " , back = " << d.back() << endl;
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    // erase(),insert(),size(),clear(),empty(),begin(),end(),rbegin(),rend()

    d.erase(d.begin(), d.begin() + 2);
    d.insert(d.begin() + 2, 111111);

    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}