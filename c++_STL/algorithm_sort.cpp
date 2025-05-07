#include <bits/stdc++.h>
using namespace std;

// ✅ Correct comparator for sorting by second, then by first
bool comparator(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 🔢 Array Sorting (with proper for loop)
    int a[] = {9, 3, 2, 7, 0};
    sort(a, a + 5);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << "\n";

    // 🧺 Vector Sorting
    vector<int> v = {9, 3, 2, 7, 0};
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << "\n";

    sort(v.begin(), v.end(), greater<int>());
    for (int i : v)
        cout << i << " ";
    cout << "\n";

    // 👫 Vector of Pairs
    vector<pair<int, int>> vp = {{1, 2}, {5, 6}, {3, 4}, {7, 2}, {0, 6}};

    // Sort by first element (default)
    sort(vp.begin(), vp.end());
    cout << "Sorted by first:\n";
    for (auto x : vp)
        cout << x.first << " " << x.second << "\n";

    // Sort by second element (custom comparator)
    sort(vp.begin(), vp.end(), comparator);
    cout << "Sorted by second:\n";
    for (auto x : vp)
        cout << x.first << " " << x.second << "\n";

    // 🔄 Reverse
    vector<int> v1 = {1, 2, 3, 4, 5};
    reverse(v1.begin(), v1.end());
    for (int i : v1)
        cout << i << " ";
    cout << "\n";

    int x = 0, b = 9;
    swap(x, b);
    cout << min(1, 4) << " " << max(4, 0) << " " << x << " " << b << endl;

    cout << *max_element(v.begin(), v.end()) << " " << *min_element(v.begin(), v.end()) << endl;

    cout << "Sum: " << accumulate(v.begin(), v.end(), 0) << endl;

    sort(v.begin(), v.end()); // Ensure the vector is sorted in ascending order
    cout << binary_search(v.begin(), v.end(), 4) << endl; // returns 1 or 0
    
    return 0;
}
