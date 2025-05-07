#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // FIFO-->first in first out

    // push(),pop(),front(),back(),swap()

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front() << " " << q.back() << endl; // 1 4

    cout << endl;
    // swap()
    queue<int> q1;
    q1.swap(q);
    cout << q.size() << endl;  // 0
    cout << q1.size() << endl; // 4

    while (!q1.empty())
    {
        cout << q1.front() << " "; // 1 2 3 4
        q1.pop();
    }
    return 0;
}