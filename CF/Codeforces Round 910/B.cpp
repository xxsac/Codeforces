#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 9;
ll a[N];

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    ll mi = a[n];
    ll ans = 0;
    for(int i = n - 1; i >= 1; --i){
        ll cnt = (a[i] + mi - 1) / mi;
        mi = a[i] / cnt;
        ans += cnt - 1;
    }
    cout << ans << '\n';
}

int main(){
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _; cin >> _;
    while(_ --) solve();
    return 0;
}
