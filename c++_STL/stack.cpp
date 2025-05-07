#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // LIFO-last in first out

    // push(),top(),pop()
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();                 // removes 5
    cout << st.top() << endl; // 4

    // while(!st.empty())
    // {
    //     cout<<st.top()<<" "; //4 3 2 1
    //     st.pop();
    // }
    // cout<<endl;

    // swap()
    stack<int> st2;
    st2.swap(st);

    cout << "st size = " << st.size() << endl;   // 0
    cout << "st2 size = " << st2.size() << endl; // 4

    while (!st2.empty())
    {
        cout << st2.top() << " "; // 4 3 2 1
        st2.pop();
    }
    cout << endl;

    return 0;
}