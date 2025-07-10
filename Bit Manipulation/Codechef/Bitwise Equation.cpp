#include <bits/stdc++.h>
using namespace std;



typedef long long ll;


void solve() {
    long long n; 
    cin >> n; 

    if(n == 0) { cout << 1 << " " << 3 << " " << 4 << " " << 5 << "\n"; 
    return;  
    }
    ll a = 1LL << 35, b = 1LL << 34 , c = 1LL << 33 , d = (1LL << 33) + n;
   

    cout << a << " " << b << " " << c << " " << d << "\n"; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 

    while(t--) {
        solve(); 
    } 
    return 0;
}