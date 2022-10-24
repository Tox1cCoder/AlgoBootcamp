#include <bits/stdc++.h>

using namespace std;

const int64_t M = 2'000'000;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int64_t c;
    string s;
    cin >> n >> c >> s;
    int j = 0;
    int64_t a = 0, b = 0, ab = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        while (j < n && ab <= c)
        {
            ans = max(ans, j - i);
            if (s[j] == 'a')
                a++;
            else if (s[j] == 'b')
            {
                b++;
                ab += a;
            }
            j++;
        }
        if (ab <= c)
            ans = max(ans, j - i);
        if (s[i] == 'b')
            b--;
        else if (s[i] == 'a')
        {
            a--;
            ab -= b;
        }
    }

    cout << ans << endl;

    return 0;
}