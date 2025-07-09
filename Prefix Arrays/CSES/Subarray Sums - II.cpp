#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<long long> arr(n);

    for (auto &v : arr)
    {
        cin >> v;
    }

    long long count = 0;
    long long sum = 0;
    map<long long, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        count += mp[sum - x];

        mp[sum]++;
    }

    cout << count << "\n";

    return 0;
}
