#include <bits/stdc++.h>

using namespace std;

const int64_t M = 2'000'000;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n, 0);
    set<int> s;

    for (int &i : a)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (!s.insert(a[i]).second)
            b[i] = 1;
    }
    for (int i : s)
    {
        cout << i << ' ';
        k--;
        if (k == 0)
            break;
    }
    if (k > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i])
            {
                cout << a[i] << ' ';
                if (--k == 0)
                    break;
            }
        }
    }

    return 0;
}