#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t b1, d1, b2, d2;
    cin >> b1 >> d1 >> b2 >> d2;
    int64_t l1, r1, l2, r2;

    auto pow = [](int64_t x, int64_t y)
    {
        int64_t p = 1, b = x;
        while (y > 0)
        {
            if (y & 1)
                p *= b;
            b *= b;
            y >>= 1;
        }
        return p;
    };

    l1 = pow(b1, d1 - 1);
    r1 = l1 * b1;
    l2 = pow(b2, d2 - 1);
    r2 = l2 * b2;

    int64_t lr = max(l1, l2);
    int64_t rr = min(r1, r2);
    if (lr > rr)
        cout << '0' << endl;
    else
        cout << rr - lr + 1;

    return 0;
}