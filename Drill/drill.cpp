#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<int> aa;

int calc(vector<int> a, int del)
{
    vector<int> tmp = a;
    for (int i = 0; i < n; i += 2)
        tmp[i] += del;

    ll sum = 0;
    sort(tmp.begin(), tmp.end());

    int median = tmp[(int)tmp.size() / 2];

    for (int i = 0; i < n; i++)
        sum += abs(a[i] - median);

    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    aa.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> aa[i];

    cout << min(calc(aa, k), calc(aa, -k));

    return 0;
}