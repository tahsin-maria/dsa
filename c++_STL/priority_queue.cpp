#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // max heap //sorted max to min
    // push --> O(logN) , pop --> O(logN)
    priority_queue<int> q;
    q.push(100);
    q.push(23);
    q.push(500);
    q.push(2);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop(); // when we pop the max or top gets poped out
    }
    cout << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(100);
    q1.push(23);
    q1.push(500);
    q1.push(2);
    while (!q1.empty())
    {
        cout << q1.top() << " ";
        q1.pop(); // when we pop the min or top gets poped out
    }
    // greater<int> --> functor
    return 0;
}