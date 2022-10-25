#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (s.insert(x).second)
            cout << "0 ";
        else
            cout << "1 ";
    }

    return 0;
}