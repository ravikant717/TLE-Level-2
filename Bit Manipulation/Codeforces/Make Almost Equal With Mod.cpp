#include <bits/stdc++.h>
using namespace std;



typedef long long ll;


void solve() {
    int n; 
    cin >> n; 

    vector<ll> v(n); 

    for(auto &ele: v) cin >> ele; 


    for(int i = 1; i <= 60; i++) {
        ll shifting = (1LL << i); //Breakpoint
        set<ll> st; 

        for(auto &ele: v) {
            ll rem = ele % shifting; 
            st.insert(rem);  
        }

        if(st.size() == 2) {
            cout << shifting << endl; 
            return; 
        }

    }


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