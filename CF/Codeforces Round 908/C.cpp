#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 2e5 + 9;
ll a[N];

void solve(){
    ll n, k; cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    ll idx = n, cnt = 0;
    while(1){
        if(a[idx] > n) break;
        if(cnt > n) break;
        ++cnt;
        idx -= a[idx];
        if(idx < 1) idx += n; 
    }
    if(cnt > n || cnt >= k) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
