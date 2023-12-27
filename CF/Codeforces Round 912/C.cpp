#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5 + 9;
ll a[N], suffix[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    suffix[n] = 0;
    for(int i = n - 1; i >= 1; --i) suffix[i] = suffix[i + 1] + a[i + 1];

    ll ans = 0ll;
    for(int i = 1; i <= n; ++i){
       ans += a[i];
       if(suffix[i] > 0) ans += suffix[i];
    }
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}