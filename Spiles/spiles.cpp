#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int64_t s, s1, s2;
    cin >> n;
    vector<int64_t> x(n + 1), y(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    x[n] = x[0];
    y[n] = y[0];
    s1 = 0, s = 0;

    auto dots = [&](int i)
    {
        int64_t a, b, k;
        a = y[i] - y[i + 1];
        b = x[i] - x[i + 1];
        if (a == 0 || b == 0)
        {
            k = abs(a) + abs(b);
            return k;
        }
        k = __gcd(a, b);
        return abs(k);
    };

    for (int i = 0; i < n; i++)
    {
        s1 += dots(i);
        s += x[i] * y[i + 1] - x[i + 1] * y[i];
    }
    s = abs(s);
    s2 = (s + 2 - s1) / 2;
    cout << s1 + s2;

    return 0;
}