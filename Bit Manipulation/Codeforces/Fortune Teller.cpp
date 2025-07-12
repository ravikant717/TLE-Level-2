#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> arr(n);
    for (auto &v : arr)
    {
        cin >> v;
    }

    ll f = 1;

    for (auto &v : arr)
    {
        if (v & 1)
        {
            f = (!f);
        }
    }

    if (x & 1)
    {
        if (!((f ^ y) & 1))
        { // Check for same parity

            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
    else
    {
        if (!((f ^ y) & 1))
        { // Check for same parity
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}