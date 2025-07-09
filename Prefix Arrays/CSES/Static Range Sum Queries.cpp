#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);

    for (auto &v : arr)
    {
        cin >> v;
    }

    // Building prefix array
    vector<long long> prefix(n, 0);
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        long long ans = prefix[b - 1];
        if (a > 1)
        {
            ans -= prefix[a - 2];
        }
        cout << ans << "\n";
    }

    return 0;
}
