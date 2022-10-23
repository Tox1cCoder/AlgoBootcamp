#include <bits/stdc++.h>

using namespace std;

const int64_t M = 2'000'000;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int64_t n, m, sum;
    int lf, rt;
    cin >> n;
    lf = 0, rt = min(n + 1, M);

    while (rt - lf > 1)
    {
        m = (lf + rt) / 2;
        sum = m * (m + 1) * (m + 5) / 6 - 1;
        if (sum > n)
            rt = m;
        else
            lf = m;
    }

    cout << lf << endl;

    return 0;
}