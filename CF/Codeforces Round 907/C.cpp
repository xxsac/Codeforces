#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;

ll a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    sort(a + 1, a + 1 + n);
    ll l = 1, r = n;
    ll ans = 0, x = 0;
    while(l <= r){
        while(x + a[l] <= a[r] && l < r){
            ans += a[l];
            x += a[l];
            ++l;
        }
        a[r] -= x;
        
        if(l == r){
            ans += a[r];
            break;
        }

        ++ans; 
        --r;
        
        x = 0;
    }
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}